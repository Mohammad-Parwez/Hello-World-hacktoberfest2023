 #include<iostream>
 using namespace std;
 int main()
 {
    int a[9],tot=9,e,i,j,found=0;
    cout<<"enter array elemnt\n";
    for(i=0;i<tot;i++)
    cin>>a[i];
    cout<<"eneter elemnt to be deleted\n";
    cin>>e;
    for(i=0;i<tot;i++)
    {
      if(a[i]=e)
      {
        for(j=i;j<(tot-1);j++)
        a[j]=a[i+1];
        found++;
        i--;
        tot--;
      }
    }
    if(found==0)
    cout<<"element not found";
    else
    cout<<"element deleted successfully";
    cout<<"the new array is\n";
    for(j=0;j<8;j++)
    cin>>a[j];
     cout<<endl;
     return 0;
 }
