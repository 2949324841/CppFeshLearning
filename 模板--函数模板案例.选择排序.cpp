#include<iostream>
using namespace std;

template<class T>
void sortcom(T arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        int max=i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[max]<arr[j])
            {
                max=j;
            }
        }
        if(max!=i)
        {
            swap(arr[max],arr[i]);
        }
    }
}
template<class T>
void swap(T arr1,T arr2)
{
T temp;
temp=arr1;
arr1=arr2;
arr2=temp;
}

template<class T>
void Println(T arr[],int len)
{
    for(int i=0;i<len;i++)
        {
        cout<<arr[i]<<" ";
        }
    cout<<endl;
}

int main()
{   char arr1[]="frgyhda";
int arr2[]={1,6,5,4,3,2,7,8,9,10,23};
int len1=sizeof(arr1)/sizeof(arr1[0]);
int len2=sizeof(arr2)/sizeof(arr2[0]);
sortcom(arr1,len1);
Println(arr1,len1);
sortcom(arr2,len2);
Println(arr2,len2);
    system("pause");
    return 0;
}