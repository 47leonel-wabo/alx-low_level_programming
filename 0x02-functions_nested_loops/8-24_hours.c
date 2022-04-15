void jack_bauer()
{
    int h;
    int m;
    for(h = 0; h <24; h++)
    {
        for(m = 0; m < 60; m++)
        {
            printf("\n%02d : ", h);
            printf("%02d", m);
        }
    }
}
