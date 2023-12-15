int i = 17;
int j = 2;
int k = 2;
int result = 0;

while (j < i)
{
    while (k < i)
    {
        if (j * k == i)
            goto fim;
        
        k++;
    }

    k = 2;
    j++;
}

result = 1;

fim:
while (true);