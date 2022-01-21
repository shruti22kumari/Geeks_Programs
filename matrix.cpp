#include<iostream>
using namespace std;
void create(int mat[int r][int c],int rr,int cc)
{
    for(i=0;i<rr;i++)
    {
        for(j=0;j<cc;j++)
        {
            cout<<"Enter element in Matrix";
            cin>>(mat[i][j]);
        }
    } 
}
void display_mat(int *mat,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<*((mat+i*c) + j)<<" ";
        }
        cout<<"\n";
    }
}
    int row1,col1,row2,col2;
    int i,j;
    int mat1[100][100];
    int mat2[100][100];
    
  
int main()
{
    cout<<"Creating two arrays"<<"\n";
    cout<<"Enter numbers of rows for Matrix1"<<"\n";
    cin>>row1;
    cout<<"Enter numbers of columns for Matrix1"<<"\n";
    cin>>col1;
    create(mat1[row1][col1]);
    cout<<"Creating two arrays"<<"\n";
    cout<<"Enter numbers of rows for Matrix1"<<"\n";
    cin>>row2;
    cout<<"Enter numbers of columns for Matrix1"<<"\n";
    cin>>col2;
    create(mat2[row2][col2]); 

    
    while(1)
    {
    
    cout<<"___________________________________"<<"\n";
    cout<<"1 for matrix multiplication"<<"\n"<<"\n"<<"2 for finding determinant of Matrix"<<"\n"<<"
    3 for finding inverse of a matrix"<<"\n"<<"4 for displaying a Matrix"<<"\n";
    cout<<"___________________________________"<<"\n";
    cin>>ch;
    cout<<"___________________________________"<<"\n";
    if(ch==1)
    {
       mul_mat()
    }
    if(ch==2)
    {
        display_mat((int*)mat,row,col);
    }
    /*else if(ch==2)
    {
       p=pop_s();  
    }
    else if(ch==3)
    {
        p=top_s();
    }
    else if(ch==4)
    {
        exit(0);
    }
    else
       cout<<"Enter correct choice"<<"\n";*/
    }return 0;

}