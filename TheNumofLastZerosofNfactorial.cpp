int TheNumofLastZerosofNfactorial(int n)
{
    int num = 0;
    
    while(n)
    {
        num += n / 5;
        n = n / 5;
    }
    
    return num;
}