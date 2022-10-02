double pow(double base,int pow)
{   
    double result=1.0;
    if(pow<1)
    {
        base=1/base;
    }
    while(pow)
    {
        if(pow&1)
        {
            result=result*base;
        }
        base*=base;
        pow/=2;
    }
    return result;
}