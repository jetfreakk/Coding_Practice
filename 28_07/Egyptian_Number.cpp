void printEgypt(int nr, int dr)
{
    if(nr==0 || dr==0)
        return;
    if(nr%dr==0)
        {cout<<nr/dr;
        return;}
    if(dr%nr==0)
        {cout<<"1/"<<dr/nr;
        return;}
    if(nr>dr)
    {
        cout<<nr/dr<<" + ";
        printEgypt(nr%dr,dr);
        return;}
    int n= dr/nr+1;
    cout<<"1/"<<n<<" + ";
    printEgypt(nr*n-dr,dr*n);
}