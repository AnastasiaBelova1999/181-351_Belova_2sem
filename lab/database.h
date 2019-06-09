#ifndef DATABASE_H
#define DATABASE_H

#endif // DATABASE_H
#include <string>
#include <iostream>
#include <fstream>
#include <QVector>
#include <QFile>
//std::string FileName = "database.txt";

struct data{
    std::string fio;
    std::string tel;
    std::string date;
};

bool checkFio(std::string fio);//Используемые символы - только буквы; Если регистр не тот, меняем на правильный.
bool checkTel(std::string tel);//длина строки 10 символов, все из которых цифры;
bool checkDate(std::string date);//тип данных Date

class DataBase{

public:
    DataBase();//конструктор
    DataBase(std::string* tempDB); //конструктор по строке: т.е. по строке, в которой записана БД, формируем БД
    ~DataBase();//деструктор
    bool add_data(data tempData);// добавить строку данных в БД
    bool open(std::string FileName)//открываем файл
    {
        QFile a;

        FileName.open("database.txt", std::fstream::in)
    }
    
    bool download(std::string & res);//загружаем данные из файла в строку
    bool close();// закрытие файла

    data parsing(std::string line);
    bool transformStr2BD(std::string strFromFile)// преобразует строку в БД
    {
        //Цикл по входной строке
        //ifstream iFile("database.txt");
        //while (!iFile.eof())
         {
            std::string line;//взять первую запись из файла
            //line = ...
            data tempData;
            tempData = parsing(line);
            add_data(tempData);
         }
    }


    bool download()//загружаем данные из файла в строку
    {
        std::string strFromFile;
        open(FileName);
        download(strFromFile);
        close();
        transformStr2BD(strFromFile);
    }

    bool del_data(std::string id);//удалить запись с заданным id

   template<typename T>
    QVector<data> find(int criterior, T data2find);//удалить запись с заданным id

    bool change(std::string id, data tempData)
    {
        //db[id] = tempData;
    }

    bool write2file();

private:
    QVector<data> *db;
    FILE* fin;

protected:


};
