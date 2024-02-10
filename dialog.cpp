#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
/// свои команды
using namespace std;
template <class T>
void ReadDataFile(const char* pFilename, list<T>& pDataList);
#include "klass_sinaps.h"
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
  ReadDataFile("/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi.txt", my_list);
// считываем из файла в  std::list

      //  QTextStream in(&inputFile);
      
      for (int n : my_list)
      {
          QString line = QString::number(n); // считываем построчно из списка и добавляем в textedit
          
       //   ui->textEdit->append ( line);
      }   
      
      // перебор в цикле
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //   int arr[list.size()];    // это массив синапсов
      int k = 0;
  //     Synaps::Peremennaia_Soprotivlenie_Sinapsa[k];  
      
      for (auto &i: my_list) {
          Synaps::Peremennaia_Soprotivlenie_Sinapsa[k++] = i; // копируем массив std::list в массив Synaps::Peremennaia_Soprotivlenie_Sinapsa[k] 
      }    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    
    
    
    
    
    
    
    
    
    
    
}

Dialog::~Dialog()
{
    delete ui;
}

