#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include<string>

using namespace std;
int dis_find(char *t , const char *a) {

  unsigned init(0),
           temp(0) , count_t(0);

  for (int i = 0 ; i != strlen(t); ++i) {

    if (a[init] == t[i]) {


      temp = i;

      ++init;
      ++count_t;
    }

    else {
      init = 0;
      count_t = 0;
    }

    if (init == strlen(a)) {
      break;
    }

    if (i == strlen(t) - 1 && init != strlen(a)) {
      init = 0;
      count_t = 0;
    }

  }

  if (init > 0) {

    for(int i=temp ; i>=0 ; --i){

        t[i] = ' ';

    }
int stop = strlen(t) - temp;


int j = temp+1;
    for(int i = 0 ;i<strlen(t) ; ++i,++j){


        t[i] = t[j];

    }

t[stop] = '\0';

return temp;
  }

  else {
    return 0;
  }


}

void get_creds(char *p , char *con , unsigned int num) {

  ///int def = num;
  unsigned int max_l = 30 * num;


  char store_de[max_l];


  unsigned int store_las = 0;
  char openn[] = "open";
  char closed[] = "secured";

  while (num) {


cout<<num<<endl;
    if (dis_find(p , con)) {





      if (p[0] == '0') {


        unsigned int y = 0;
        unsigned int n = store_las;
        for (unsigned int a = n; y < strlen(openn) ; ++a, ++y) {
          store_de[a] = openn[y];

          ++store_las;
        }
      }
      else if (p[0] > '0') {

        unsigned int y = 0;
        unsigned int n = store_las;
        for (unsigned int a = n; y < strlen(closed) ; ++a, ++y) {
          store_de[a] = closed[y];
          ++store_las;
        }
      }

      store_de[store_las] = ' ';
      store_las += 1;

      for (unsigned int i = 0 ; i < strlen(p); ++i)
      {
        if (p[i] == '"') {

          for (unsigned int t = i + 1 ; t < strlen(p); ++t) {

            if (p[t] == '"') {
              break;
            }
            else {
              store_de[store_las] = p[t];
              ++store_las;
            }
          }


          break;
        }

      }   ///
      store_de[store_las] = '\n';
      store_las += 1;
      store_de[store_las] = '\0';

    }


    else {
      break;
    }
    --num;

  }

  p[0] = NULL;

  for (unsigned int i = 0; i < strlen(store_de) ; ++i) {
    p[i] = store_de[i];
  }
  p[strlen(store_de)] = '\0';



}   ///


void extract(char *extr , int pos) {

  char temp_store[40];


  short temp = 1;

  for (unsigned int i = 0 ; i < strlen(extr) ; ++i) {
    if (extr[i] == '\n') {
      ++temp;
    }

    if (temp == pos) {

      unsigned int gett = i + 1;
      if (temp == 1) {
        gett = 0;
      }
      unsigned int t = 0;
      for (unsigned int p = gett; p < strlen(extr); ++p, ++t) {
        if (extr[p] == '\n') {
          break;
        }
        temp_store[t] = extr[p];
      }
      temp_store[t] = '\0';
      break;
    }

  }

  for (unsigned int i = 0; i < strlen(temp_store) ; ++i) {
    extr[i] = temp_store[i];
  }
  extr[strlen(temp_store)] = '\0';

}
#endif // TEST_H_INCLUDED
