#include<stdio.h>
#include<math.h>
int snt(int a)
{
	int i;
    if (a<2)    
        return 0;

    for (i=2;i<=sqrt((float)a);i++)
    {
        if (a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void main()
{
	int chon;
	do
	 {
	 	system("cls");
	 	printf("\n1. Kiem tra 1 so co phai so nguyen to khong");
	 	printf("\n2. Hien thi cac so nguyen to nho hon n");
	 	printf("\n3. Hien thi n so nguyen to dau tien");
	 	printf("\n4. Hien thi cac so nguyen to nam giua 2 so cho truoc");
	 	printf("\n5. Thoat");
	 	printf("\nMoi ban chon: 1 | 2 | 3 | 4 | 5 .\n");
	 	scanf("\n%d",&chon);
	 	switch(chon)
	 	{
	 		case 5:
	 			printf("Chao ban !");
	 			break;
				
			case 1:
			{
				int n;
				printf ("Nhap so ban muon kiem tra: ");
				scanf("%d",&n);
				if (snt(n)==1)
					printf("%d la so nguyen to !\n",n);
				else
					printf("%d khong phai so nguyen to! \n",n);
				getch();
			}
			break;
			case 2:
			{
				int i,n;
				printf ("Nhap so nguyen to n ");
				scanf("%d",&n);
				printf("So nguyen to nho hon %d la: ",n);
				for (i=1; i<n; i++)
				{
					if (snt(i)==1)
					printf("%d ",i);
				}
				getch();
			}	
			break;
			case 3:
			{
				int n;
    			printf("Nhap n = ");
    			scanf("%d", &n);
    			printf("%d so nguyen to dau tien la: \n", n);
    			int dem = 0;
    			int i = 2;
    			while (dem < n) {
        		if (snt(i)) {
            	printf("%d ", i);
            	dem++;
            	}
        		i++;
				}		
				getch();
			}	
			break;
			case 4:
			{
				int i,n,m,dem,tg;
				printf ("Nhap khoang tu m den n: ");
				scanf("\n%d%d",&m,&n);
				if (m>n)
				{
					tg=m;
					m=n;
					n=tg;
				}
				dem=0;
				printf("So nguyen to trong khoang tu %d den %d: ",m,n);
				for (i=m; i<=n; i++)
				{
					if (snt(i)==1)
					{
						printf("%d ",i);
						dem++;
					}
				}
				if (dem==0)
				{
					printf("Khong co !");
				}
				getch();
			}	
			break;
			default: printf("Nhap lai! ");
			getch();
		}
	 }
	while (chon !=5); 	
}
