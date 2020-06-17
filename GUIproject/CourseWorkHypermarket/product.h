#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>

// «Товар» (фирма, наименование, цена, максимальный процент скидки)

class Product
{
public:
    Product();

    Product(
        const std::string& firm,
        const std::string& name,
        double price,
        double max_discount );

    std::string GetFirm() const;

    std::string GetName() const;

    double GetPrice() const;

    double GetMaxDiscount() const;

    virtual ~Product();

    /* virtual methods */
    virtual bool GetIsContract() const;
    virtual int GetMaxSimCards() const;

    virtual std::string GetOS() const;
    virtual std::vector<std::string> GetPreinstalledProgramms() const;
    virtual std::string GetPreinstalledProgrammsInStr() const;

    virtual double GetDiagonalSize() const;
    virtual double GetWeight() const;
    virtual int GetCpuCores() const;
    virtual int GetMainMemory() const;

protected:
    std::string firm;
    std::string name;

    double price;
    double max_discount;
};

#endif // PRODUCT_H
