#ifndef IBU_H
#define IBU_H

class ibu
{
public:
    srting nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout << "Ibu \"" << nama << "\" ada\n";
    }

    ~ibu()
    {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
}