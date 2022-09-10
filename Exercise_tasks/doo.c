void read_command(char cmd[], char *par[])
{
        char line[1024];
        int count = 0, i = 0, j = 0;
        char *array[100], *pch;

        for ( ;; )
        {
                int c = fget(stdin);

                line[count ++] = (char) c;

                if (c == '\n')
                        break;
        }
        if (count == 1)
                return (0);
        pch = strtok(line, '\n');

        while (pch != NULL)
        {
        array[i++] = strdup(pch);
        pch = strtok (NULL, '\n');
        }
        strcpy (cmd, array[0]);

        for (j = 0; j < i; j++)
        {
                par[j] = array[j];
                par[i] = NULL;
        }
