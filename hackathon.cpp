#include <stdio.h>
int main()
{
	int value, num1, arr[100], sum, shh[100], index=0, num2=0, max, temp,  value2, add, key,k, start, end, mid, sapxep[100];
	do
	{
		printf ("                                MENU\n");
		printf ("1.Nh?p s? ph?n t? và giá tr? cho m?ng\n");
		printf ("2.In ra giá tr? các ph?n t? trong m?ng theo d?ng (arr[0] = 1, arr[1] = 5 …)\n");
		printf ("3.Ð?m s? lu?ng các s? hoàn h?o có trong m?ng. Bi?t s? hoàn h?o là s? có t?ng các u?c b?ng chính nó\n");
		printf ("4.Tìm giá tr? l?n th? 2 trong m?ng, không du?c s?p x?p m?ng\n");
		printf ("5.Thêm m?t ph?n t? vào v? trí ng?u nhiên trong  m?ng, ph?n t? m?i thêm vào m?ng và v? trí thêm vào ph?i do ngu?i dùng nh?p vào	\n");
		printf ("6.Xóa ph?n t? t?i m?t v? trí c? th? (ngu?i dùng nh?p v? trí)\n");
		printf ("7.S?p x?p m?ng theo th? t? tang d?n (Insertion sort)\n");
		printf ("8.Cho ngu?i dùng nh?p vào m?t ph?n t?, tìm ki?m xem ph?n t? dó có t?n t?i trong m?ng hay không (Binary search)\n");
		printf ("9.S?p x?p l?i m?ng và hi?n th? ra toàn b? ph?n t? có trong m?ng sao cho toàn b? s? ch?n d?ng tru?c, s? l? d?ng sau\n");
		printf ("10.Ð?o ngu?c th? t? c?a các ph?n t? có trong m?ng\n");
		printf ("11. thoat\n");
		printf ("moi nhap lua chon cua ban:");
		scanf ("%d",&value);
		switch (value)
		{
			case 1:
				printf ("moi nhap so phan tu trong mang:");
				scanf ("%d",&num1);
				for (int i=0; i<num1; i++)
				{
					printf ("moi nhap pahn tu arr[%d]:",i);
					scanf ("%d",&arr[i]);
				}
				printf ("\n");
				break;
			case 2:
				
				for (int i=0; i<num1; i++)
				{
					printf ("arr[%d]=%d ",i,arr[i]);
				}
				printf ("\n");
				break;
			case 3:
			    for (int i=0; i<num1; i++)
             	{
             		sum=0;
             	    for (int j=0; j<=arr[i]; j++)
					 {
					    if (arr[i]%j==0)
						{
                            sum +=j;
						}	
					 }
					 shh[i]=sum;
					 index ++;	
				}
				
				for (int i=0; i<num1 ; i++)
			     {
			     	if (shh[i]=arr[i])
			     	{
			     		num2=num2+1;
					 }
				 }
				 printf ("co %d so hoan hao",num2);
				 printf ("\n");
				 break;
			case 4:
				max=0;
				temp=arr[num1-1];
				for (int i=0; i<num1; i++)
				{
					if (arr[i]>max)
					{
						max=i;
					}
				}
				for (int i=max; i<=num1; i++)
				{
					arr[i]=arr[i+1];
				}
				num1--;
				max=0;
				for (int i=0; i<num1; i++)
				{
					if (arr[i]>max)
					{
						max=arr[i];
					}
				}
				printf ("so lon thu 2:%d ", max);
				num1++;
				arr[num1-1]=temp;
				printf ("\n");
				break;
			case 5:
			    printf ("moi nhap phan tu muon them :");
				scanf ("%d",&value2);
				printf ("moi nhap vi tri muon them:");
				scanf ("%d",&add);
				for (int i=num1; i<=add; i++)
				 {
				 	arr[i]=arr[i-1];
				 }
				 arr[add]=value2;
				 num1++;
				 for (int i=0; i<num1; i++)
				 {
				 	printf ("%d ",arr[i]);
				 }
				 printf ("\n");	
				 break;	
			case 6:
			 add=0;
			 printf ("moi nhap vi tri muon xoa:");
				scanf ("%d",&add);
				for (int i=add; i<=num1; i++)
				{
					arr[i]=arr[i+1];
				}
				num1--;
				 for (int i=0; i<num1; i++)
				 {
				 	printf ("%d ",arr[i]);
				 }
				 printf ("\n");	
				 break;
			case 7:
				 temp=0;
			     printf ("mang khi chua sap xep:");
			      for (int i=0; i<num1; i++)
			     {
			     	printf ("%d ",arr[i]);
				 }
			     printf ("\n");
			     for (int i=0; i<4; i++)
	            {
		         key = arr[i];
		         k= i-1;
		         while (k>=0 && arr[k]>key)
		        {
			      arr[k+1]=arr[k];
		         	k--; 
		        }      
		        arr[k+1]=key; 
	            } 
	             printf ("phan tu sau khi duoc xap xep :");
                	for  (int i=0; i<4; i++)
             	{
		         printf ("%d ",arr[i]); 
	            }
			printf ("\n");
			break;
		case 8:
	        printf ("moi nhap phan tu muon tim :");
				scanf ("%d",&value2);
	        start = 0;
	        end = sizeof(arr)/sizeof(int);
	        	while(start<=end){
		      mid = (start+end)/2;
	      	if(arr[mid]==value2){
			printf("Vi tri phan tu can tim o vi tri %d\n", mid);
		     break;
		    }else if(arr[mid]>value2){
			end = mid-1;
		    }else{
			start = mid+1;
		      }
	        }
	        printf("Khong tim thay phan tu can tim");
	        break;
			case 11:
				return 1;
			default:
			printf("khong hop le");
			break;	
		}
	} while (value!=0);
}
