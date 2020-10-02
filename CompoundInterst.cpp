int total = 0;
int payment = 10;
float interest = 0.07;
float months = 12;


int main()
{
    for (int i = 0; i < months; i++) {
        total += payment;
        total += total * interest;
    }
    return total;
}
