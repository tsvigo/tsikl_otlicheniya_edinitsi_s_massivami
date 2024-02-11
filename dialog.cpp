#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
/// свои команды
using namespace std;

#include "klass_sinaps.h"
//#include <QTextStream>
//#include <QFile>
#include <fstream>
#include "class_neiron.h"
template <class T>
void ReadDataFile(const char* pFilename, list<T>& pDataList)
{
    pDataList.clear();
    ifstream inFile(pFilename, std::ios::in);
    if (inFile.good())
    {
        std::copy(istream_iterator<T>(inFile), istream_iterator<T>(), back_insert_iterator<list<T> >(pDataList));
        inFile.close();
    }
}
//unsigned long long
//    Class_Neiron::Peremennaia_Zariad_Neirona[202] = {};
///// конец своих команд ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 1. изменение синапсов 2; izmenenie_sinapsov_2
//считываем файл в массив std::list
std::list<int> my_list = { };   // объявили 
  ReadDataFile("/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi.txt",
             my_list);
// считываем из файла в  std::list

      //  QTextStream in(&inputFile);
  QString line="";
      for (int n : my_list)
      {
           line = QString::number(n); // считываем построчно из списка и добавляем в textedit
          
       //   ui->textEdit->append ( line);
      }   
      
      // перебор в цикле
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //   int arr[list.size()];    // это массив синапсов
      int k = 0;
  //     Synaps::Peremennaia_Soprotivlenie_Sinapsa[k];
      my_list.begin(); // итератор устанавливаем на начало массива
      for (auto &i: my_list) {
          Synaps::Peremennaia_Soprotivlenie_Sinapsa[k++] = i; // копируем массив std::list в массив Synaps::Peremennaia_Soprotivlenie_Sinapsa[k]
      
          // ui->textEdit->append ( QString::number(Synaps::Peremennaia_Soprotivlenie_Sinapsa[k++]));
          // ui->textEdit->append ( QString::number(i));
      }    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
//теперь то же самое с нейронами
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      //считываем файл в массив std::list
      std::list<int> my_list_2 = { };   // объявили 
  ReadDataFile("/home/viktor/my_projects_qt_2/build-zapolnenie_nejronov_sluchajnymi_nachalnymi_zaryadami_4-Desktop_Qt_5_12_12_GCC_64bit-Debug/neyroni.txt",
                   my_list_2);
      // считываем из файла в  std::list
      
      //  QTextStream in(&inputFile);
      QString line2="";
      for (int n : my_list_2)
      {
          line2 = QString::number(n); // считываем построчно из списка и добавляем в textedit
          
          //   ui->textEdit->append ( line);
      }   
      
      // перебор в цикле
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //   int arr[list.size()];    // это массив синапсов
//      unsigned long long
//           Class_Neiron::Peremennaia_Zariad_Neirona[202] = {};
      int k2 = 0;
      //     Synaps::Peremennaia_Soprotivlenie_Sinapsa[k];
      my_list_2.begin(); // итератор устанавливаем на начало массива
      for (auto &i: my_list_2) {
          Class_Neiron::Peremennaia_Zariad_Neirona[k2++] = i; // копируем массив std::list в массив Synaps::Peremennaia_Soprotivlenie_Sinapsa[k]
          
          // ui->textEdit->append ( QString::number(Synaps::Peremennaia_Soprotivlenie_Sinapsa[k++]));
           ui->textEdit_2->append ( QString::number(i));
      }    
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    
    
    
    
    
    
    
    
}

Dialog::~Dialog()
{
    delete ui;
}

