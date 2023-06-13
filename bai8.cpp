#include <stdio.h>
#include <Windows.h>
#include <time.h>
#define max 100
void xuat()
{
	for (int i = 0; i < 30; i++)
	{
		Sleep(40);
		printf("=");
	}
}
int random(int minN, int maxN)
{
	return minN + rand() % (maxN + 1 - minN);
}
void xuat2(int x, int y, int z)
{
	printf("Ket qua: ");
	Sleep(2000);
	printf("%3d", x);
	Sleep(2000);
	printf("%3d", y);
	Sleep(2000);
	printf("%3d\n", z);
}
int main()
{
	srand((int)time(0));
	int x = random(1, 6);
	int y = random(1, 6);
	int z = random(1, 6);
	xuat();
	int t = 500;
	printf("\nTai Khoan: %d trieu dong\n", t);
	printf("Nhap so tien muon dat cuoc: ");
	int c;
	scanf("%d", &c);
	xuat();
	if (c > t)
	{
		printf("So du khong du. Nap them tien.\n");
		xuat();
		exit(0);
	}
	printf("\nNhap lua chon cua ban: \n");
	printf("1. Ban chon tai.\n");
	printf("2. Ban chon xiu.\n");
	int a;
	scanf("%d", &a);
	xuat();
	printf("\n");
	switch (a)
	{
	case 1: // tai
	{
		xuat2(x, y, z);
		printf("Tong: %d\n", (x + y + z));
		if ((x + y + z) > 10)
		{
			printf("Ban Thang !!!\n");
			t = t + c;
			printf("Tai Khoan: %d\n", t);
		}
		else if ((x + y + z <= 10))
		{
			printf("Chuc ban may man lan sau !\n");
			t = t - c;
			printf("Tai Khoan: %d\n", t);
			xuat();
		}
	}
	break;
	case 2: // xiu
	{
		xuat2(x, y, z);
		printf("Tong: %d\n", (x + y + z));
		if ((x + y + z) <= 10)
		{
			printf("Ban Thang !!!\n");
			t = t + c;
			printf("Tai Khoan: %d\n", t);
		}
		else if ((x + y + z > 10))
		{
			printf("Chuc ban may man lan sau !\n");
			t = t - c;
			printf("Tai Khoan: %d\n", t);
			xuat();
		}
	}
	break;
	}
	return 0;
}
