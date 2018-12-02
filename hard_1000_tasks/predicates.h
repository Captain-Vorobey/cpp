#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED

int pow(int value, int pow)
{
	int temp = value;
	for (int i = 1; i < pow; i++)
	{
		temp *= value;
	}
	return temp;
}

#endif // PREDICATES_H_INCLUDED
