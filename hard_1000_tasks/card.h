#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>

/*enum Value {two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};
enum Suit {hearts, diamonds, spades, clubs};


void cards(int suit)
{
    switch(suit)
    {
        case Suit::hearts:
        {
            std::cout << "h" << std::endl;
            break;
        }
        case Suit::diamonds:
        {
            std::cout << "d" << std::endl;
            break;
        }
        case Suit::spades:
        {
            std::cout << "s" << std::endl;
            break;
        }
        case Suit::clubs:
        {
            std::cout << "c" << std::endl;
            break;
        }

    }
}

std::string Cards(int value)
{
    switch(value)
    {
    case Value::two:
        std::cout << "2" << std::endl;
    case Value::three:
        std::cout << "3" << std::endl;
    case Value::four:
        std::cout << "4" << std::endl;
    case Value::five:
        std::cout << "5" << std::endl;
    case Value::six:
        std::cout << "6" << std::endl;
    case Value::seven:
        std::cout << "7" << std::endl;
    case Value::eight:
        std::cout << "8" << std::endl;
    case Value::nine:
        std::cout << "9" << std::endl;
    case Value::ten:
        std::cout << "10" << std::endl;
    case Value::jack:
        std::cout << "j" << std::endl;
    case Value::queen:
        std::cout << "q" << std::endl;
    case Value::king:
        std::cout << "k" << std::endl;
    case Value::ace:
        std::cout << "a" << std::endl;
    }
}

/*void card()
{
    cards(4) + Cards(14);
}*/

#endif // CARD_H_INCLUDED
