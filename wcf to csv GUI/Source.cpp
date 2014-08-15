#include "DataStructs.h"
#include <iostream>
#include <fstream>
#include <Windows.h> 
#include <istream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main()
{
	//	Header file initializations
	WC_IMAGE_DATA_HEADER_2	FileWCF;
	WC_IMAGE_DATA	DataWCF;

	//	Variables to be used later on
	int i_WCF_Size;
	int i_Headers;
	int i_RestOfFile;
	int i_WidthBytes;

	//	Open .wcf image
	FILE* F_WCF = fopen("C:\\Program Files (x86)\\DataRay\\Test_Perfect_Gaussian_2mm.wcf", "r+b");
	if (!F_WCF)
	{
		cout << "Failed to open the WCF image!" << endl;
	}
	else if (F_WCF)
	{
		//	Folder that will be created in Documents
		CreateDirectory((LPCWSTR)"C:\\Users\\vramirez\\Documents\\ConvertedImage", NULL);
		//	File created within the new folder
		FILE* NewBMPImage = fopen("C:\\Users\\vramirez\\Documents\\ConvertedImage\\Image.CSV", "w");
		if (!NewBMPImage)
		{
			cout << "Failed to create the new BMP file!" << endl;
		}
		//	Create the ofstream
		ofstream OutPut;
		OutPut.open("C:\\Users\\vramirez\\Documents\\ConvertedImage\\Image.CSV");
		//	Find the size of the entire image
		fseek(F_WCF, 0, SEEK_SET);
		fseek(F_WCF, 0, SEEK_END);
		i_WCF_Size = ftell(F_WCF);
		fseek(F_WCF, 0, SEEK_SET);

		i_RestOfFile = (i_WCF_Size - sizeof(WC_IMAGE_DATA_HEADER_2));
		int ConvertBytes = (i_RestOfFile * 2);

		//	Read and write the header files
		if (!OutPut.is_open())
		{
			cout << "Failed to open the CSV file. Cannot begin writing." << endl;
		}
		else if (OutPut.is_open())
		{
			fread(&FileWCF, sizeof(FileWCF), 1, F_WCF);

			fread(&DataWCF, sizeof(DataWCF), 1, F_WCF);

			WORD Data;

			for (WORD Y = 1; Y < (DataWCF.Height + 1); Y++)
			{
				for (WORD X = 1; X < (DataWCF.Width + 1); X++)
				{
					fread(&Data, 2, 1, F_WCF);
					OutPut << (WORD)Data << ",";

				}
				OutPut << endl;
			}
		}
		OutPut.close();

	}



	system("pause");
	return(0);
}