#ifndef PRINT_LINE_H_INCLUDED
#define PRINT_LINE_H_INCLUDED

void print_line()
{
    for(int i = 0; i < 8; ++i)
    {
        std::cout << "--";
    }
    std::cout << std::endl;
}

void print_bytes_number()
{
    for(int i = 0; i < 7; ++i)
    {
        std::cout << i << " ";
    }
    std::cout << " cf" << std::endl;
}

#endif // PRINT_LINE_H_INCLUDED
