#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

int swap_(int* value, int* value1)
{
    int temp = *value;
    *value = *value1;
    *value1 = temp;
}

#endif // UTILITIES_H_INCLUDED
