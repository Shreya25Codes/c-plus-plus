#include <iostream>
#include <string>
using namespace std;

namespace Amazon
{
    class Azproduct
    {
        int productId;
        string productName;
        float price, discount, netpayment;

    public:
        static int totalProducts;

        void inputInfo()
        {
            cout << "Enter Product ID: ";
            cin >> productId;

            cout << "Enter Product Name: ";
            cin >> productName;

            cout << "Enter Price: ";
            cin >> price;

            cout << "Enter Discount (%): ";
            cin >> discount;

            applyDiscount();
            totalProducts++;
        }

        void applyDiscount()
        {
            netpayment = price - (price * discount / 100);
        }

        void displayInfo()
        {
            cout << "\nProduct ID: " << productId;
            cout << "\nProduct Name: " << productName;
            cout << "\nPrice: " << price;
            cout << "\nDiscount: " << discount << "%";
            cout << "\nNet Payment: " << netpayment << endl;
        }

        string getName()
        {
            return productName;
        }

        float getNetPayment()
        {
            return netpayment;
        }

        static void showTotalProducts()
        {
            cout << "Amazon Products Created: "
                 << totalProducts << endl;
        }
    };

    int Azproduct::totalProducts = 0;
}

namespace FlipKart
{
    class Ftproduct
    {
        int productId;
        string productName;
        float price, discount, netpayment;

    public:
        static int totalProducts;

        void inputInfo()
        {
            cout << "Enter Product ID: ";
            cin >> productId;

            cout << "Enter Product Name: ";
            cin >> productName;

            cout << "Enter Price: ";
            cin >> price;

            cout << "Enter Discount (%): ";
            cin >> discount;

            applyDiscount();
            totalProducts++;
        }

        void applyDiscount()
        {
            netpayment = price - (price * discount / 100);
        }

        void displayInfo()
        {
            cout << "\nProduct ID: " << productId;
            cout << "\nProduct Name: " << productName;
            cout << "\nPrice: " << price;
            cout << "\nDiscount: " << discount << "%";
            cout << "\nNet Payment: " << netpayment << endl;
        }

        string getName()
        {
            return productName;
        }

        float getNetPayment()
        {
            return netpayment;
        }

        static void showTotalProducts()
        {
            cout << "FlipKart Products Created: "
                 << totalProducts << endl;
        }
    };

    int Ftproduct::totalProducts = 0;
}

namespace CompareRate
{
    class ProductCompare
    {
    public:
        static int azCount;
        static int ftCount;

        void bestDeal(Amazon::Azproduct a,
                      FlipKart::Ftproduct f)
        {
            cout << "\n--- Amazon Product ---";
            a.displayInfo();

            cout << "\n--- FlipKart Product ---";
            f.displayInfo();

            if (a.getName() != f.getName())
            {
                cout << "\nProduct names do not match!";
                cout << "\nComparison cannot be performed.\n";
            }
            else if (a.getNetPayment() < f.getNetPayment())
            {
                cout << "\nAmazon offers the lower price!\n";
                azCount++;
            }
            else if (f.getNetPayment() < a.getNetPayment())
            {
                cout << "\nFlipKart offers the lower price!\n";
                ftCount++;
            }
            else
            {
                cout << "\nBoth companies offer the same price!\n";
            }
        }

        static void showStatus()
        {
            cout << "\n--- Lower-Price Status ---";
            cout << "\nAmazon offered the lower price: "
                 << azCount << " times";
            cout << "\nFlipKart offered the lower price: "
                 << ftCount << " times\n";
        }
    };

    int ProductCompare::azCount = 0;
    int ProductCompare::ftCount = 0;
}

int main()
{
    using namespace Amazon;
    using namespace FlipKart;
    using namespace CompareRate;

    Azproduct az[10];
    Ftproduct ft[10];
    ProductCompare pc;

    int n, ch, company, index, i, j;

    cout << "Enter number of products to compare (max 10): ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Invalid number of products!";
        return 0;
    }

    cout << "\nEnter Amazon product details:\n";
    for (i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        az[i].inputInfo();
    }

    cout << "\nEnter FlipKart product details:\n";
    for (i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        cout << "(Use the same product name as Amazon)\n";
        ft[i].inputInfo();
    }

    do
    {
        cout << "\n\n===== MAIN MENU =====";
        cout << "\n1. Display Product Details";
        cout << "\n2. Display Number of Products Created";
        cout << "\n3. Compare Best Deal";
        cout << "\n4. Lower-Price Status";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\n1. Amazon";
            cout << "\n2. FlipKart";
            cout << "\nChoose company: ";
            cin >> company;

            cout << "Enter product number (1 to " << n << "): ";
            cin >> index;

            if (index < 1 || index > n)
            {
                cout << "Invalid product number!";
            }
            else if (company == 1)
            {
                az[index - 1].displayInfo();
            }
            else if (company == 2)
            {
                ft[index - 1].displayInfo();
            }
            else
            {
                cout << "Invalid company choice!";
            }
            break;

        case 2:
            cout << "\n1. Amazon";
            cout << "\n2. FlipKart";
            cout << "\nChoose company: ";
            cin >> company;

            if (company == 1)
                Azproduct::showTotalProducts();
            else if (company == 2)
                Ftproduct::showTotalProducts();
            else
                cout << "Invalid company choice!";
            break;

        case 3:
            cout << "\nEnter product number to compare (1 to "
                 << n << "): ";
            cin >> index;

            if (index < 1 || index > n)
            {
                cout << "Invalid product number!";
            }
            else
            {
                pc.bestDeal(az[index - 1], ft[index - 1]);
            }
            break;

        case 4:
            ProductCompare::showStatus();
            break;

        case 5:
            cout << "Program ended.";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (ch != 5);

    return 0;
}
