#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>
#include <windows.h>
#define T 400

#include "sons.h"
#include "structp.h"
#include "jogo.h"

using namespace std;

void Efeitos () {

		  cout <<endl<<endl<<endl<<endl<<endl<<endl;
		                                    system ("color 01");
		  cout <<"     ----------  ------  --   --     --   --  --  --  -----  --  ------ "<<endl;
		                                         Sleep (200);
		                                    system ("color 06");
		  cout <<"    |          ||      ||       |   |       ||  ||  ||     ||  ||      |"<<endl;
		                                         Sleep (200);
		                                    system ("color 04");
		  cout <<"     ---    --- |      ||       |   |       ||  ||  ||   -- |  ||   --- "<<endl;
		                                          Sleep (200);
		                                    system ("color 02");
		  cout <<"        |  |    |      ||       |   |       ||  ||  ||  |   |  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 0F");
		  cout <<"        |  |    |      ||       |   |       ||  ||  ||   -- |  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 01");
		  cout <<"        |  |    |      ||       |   |       ||  ||  ||     ||  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 04");
		  cout <<"        |  |    |      ||       |   |       ||  ||  | --   ||  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 06");
		  cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  |   |  ||  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 02");
		  cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  | --   ||  ||   --- "<<endl;
		                                           Sleep (200);
		                                    system ("color 0F");
	      cout <<"        |  |    |      ||  | |  |   |  | |  ||      ||     ||  ||      |"<<endl;
	                                                Sleep (200);
	                                        system ("color 09");
		  cout <<"         --      ------  --   --     --   --  ------  -----  --  ------ "<<endl;
		                                        Sleep (500);
		                                       system ("cls");

          cout <<endl<<endl<<endl<<endl<<endl<<endl;
		                                    system ("color 01");
		  cout <<"     ----------  ------  --   --     --   --  --  --  -----  --  ------ "<<endl;
		                                         Sleep (200);
		                                    system ("color 06");
		  cout <<"    |          ||      ||       |   |       ||  ||  ||     ||  ||      |"<<endl;
		                                         Sleep (200);
		                                    system ("color 04");
		  cout <<"     ---    --- |      ||       |   |       ||  ||  ||   -- |  ||   --- "<<endl;
		                                          Sleep (200);
		                                    system ("color 02");
		  cout <<"        |  |    |      ||       |   |       ||  ||  ||  |   |  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 0F");
		  cout <<"        |  |    |      ||       |   |       ||  ||  ||   -- |  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 01");
		  cout <<"        |  |    |      ||       |   |       ||  ||  ||     ||  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 04");
		  cout <<"        |  |    |      ||       |   |       ||  ||  | --   ||  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 06");
		  cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  |   |  ||  ||  |    "<<endl;
		                                           Sleep (200);
		                                    system ("color 02");
		  cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  | --   ||  ||   --- "<<endl;
		                                           Sleep (200);
		                                    system ("color 0F");
	      cout <<"        |  |    |      ||  | |  |   |  | |  ||      ||     ||  ||      |"<<endl;
	                                                Sleep (200);
	                                        system ("color 09");
		  cout <<"         --      ------  --   --     --   --  ------  -----  --  ------ "<<endl;
		                                         Sleep (1500);

		                                    som_aberturas ();
		     for (int i=0 ;i< 3 ;i++){
		
			   	    cout <<endl<<endl<<endl<<endl<<endl<<endl;
		
							                            system ("color 01");
					    cout <<"     ----------  ------  --   --     --   --  --  --  -----  --  ------ "<<endl;
					                                      Sleep (55);
					                                    system ("color 06");
					    cout <<"    |          ||      ||       |   |       ||  ||  ||     ||  ||      |"<<endl;
					                                        Sleep (55);
					                                    system ("color 04");
					    cout <<"     ---    --- |      ||       |   |       ||  ||  ||   -- |  ||   --- "<<endl;
					                                       Sleep (55);
					                                    system ("color 02");
					    cout <<"        |  |    |      ||       |   |       ||  ||  ||  |   |  ||  |    "<<endl;
					                                        Sleep (55);
					                                    system ("color 0F");
					    cout <<"        |  |    |      ||       |   |       ||  ||  ||   -- |  ||  |    "<<endl;
					                                        Sleep (55);
					                                    system ("color 01");
					    cout <<"        |  |    |      ||       |   |       ||  ||  ||     ||  ||  |    "<<endl;
					                                        Sleep (55);
					                                    system ("color 09");
					    cout <<"        |  |    |      ||       |   |       ||  ||  | --   ||  ||  |    "<<endl;
					                                       Sleep (55);
					                                    system ("color 04");
					    cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  |   |  ||  ||  |    "<<endl;
					                                       Sleep (55);
					                                    system ("color 09");
					    cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  | --   ||  ||   --- "<<endl;
					                                        Sleep (55);
					                                    system ("color 04");
					    cout <<"        |  |    |      ||  | |  |   |  | |  ||      ||     ||  ||      |"<<endl;
					                                       Sleep (55);
					                                    system ("color 09");
					    cout <<"         --      ------  --   --     --   --  ------  -----  --  ------ "<<endl;
					                                        Sleep (150);
					                                       system ("cls");
		   }
		
				                                          Menu_inicial();
		}

void Menu_inicial (){

	      cout <<endl<<endl;
	      cout <<"                             WELCOME TO TOM MUSIC"<<endl<<endl;
	                                            system ("color 09");
	      cout <<endl<<endl;
		  cout <<"     ----------  ------  --   --     --   --  --  --  -----  --  ------ "<<endl;
		                                         Sleep (55);
		  cout <<"    |          ||      ||       |   |       ||  ||  ||     ||  ||      |"<<endl;
		                                         Sleep (55);
		  cout <<"     ---    --- |  ||  ||       |   |       ||  ||  ||   -- |  ||   --- "<<endl;
		                                         Sleep (55);
		  cout <<"        |  |    |  ||  ||       |   |       ||  ||  ||  |   |  ||  |    "<<endl;
		                                         Sleep (55);
		  cout <<"        |  |    |  ||  ||       |   |       ||  ||  ||   -- |  ||  |    "<<endl;
		                                         Sleep (55);
		  cout <<"        |  |    |  ||  ||       |   |       ||  ||  ||     ||  ||  |    "<<endl;
		                                         Sleep (55);
		  cout <<"        |  |    |  ||  ||       |   |       ||  ||  | --   ||  ||  |    "<<endl;
		                                         Sleep (55);
		  cout <<"        |  |    |  ||  ||  | |  |   |  | |  ||  ||  |   |  ||  ||  |    "<<endl;
		                                         Sleep (55);
		  cout <<"        |  |    |  ||  ||  | |  |   |  | |  ||  ||  | --   ||  ||   --- "<<endl;
		                                         Sleep (55);
	      cout <<"        |  |    |      ||  | |  |   |  | |  ||      ||     ||  ||      |"<<endl;
	                                             Sleep (55);
		  cout <<"         --      ------  --   --     --   --  ------  -----  --  ------ "<<endl;
		  cout <<endl<<endl<<endl<<endl;
	      cout <<"  CADASTRA-1                       INICIAR-2                         SAIR-3";
	      cout <<endl;
	                                cin >> Opcao;
									system ("cls");
									
	            switch (Opcao){
	            	
	      	              case 1 :
	      	              	
	      	        	        cadastro_do_jogo ();
	      	  	                break;
	      	  	                
	      	              case 2 :
	      	              	
	      	        	        Login ();
	      	        	        break;
	      	        	        
	      	              case 3 :

	      	        	     cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	      	        	     cout <<"                                    DESEJA SAIR-1 ?NÃO ?-2 ";
	      	        	     cin >> Opcao;
	      	        	                          system ("cls");
	      	        	                          
		      	             	    switch (Opcao) {
		      	             	    	
							                 case 1 :
							                 	   
		      	        	                      cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            	                              cout <<"                                     TRANK YOU"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
													            som_aberturas ();
													            escolha2 =1;
	                                                            system ("PAuSE");
	                                          break;
	                                          
	                                         case 2 :
	                                         	
	                             	              Menu_inicial ();
	                             	              
	                               	           break;
	                               	           
	                                         default :
	                                         	
	                              	               cout <<endl<<endl<<endl<<endl;
	                              	                        Beep (550,T);
	                                              cout <<"                                      #INVALIDO"<<endl;
	                                                                   system ("PAUSE");
	                                                                   system ("cls");
	                                                                   Menu_inicial ();
	                              	        break;
	                                       }
	      	                  break;
	      	                  
	      	             default :
	      	             	
	      	        	    cout <<endl<<endl<<endl<<endl;
	      	        	                Beep (550,T);
                            cout <<"                                      #INVALIDO"<<endl;
                                           system ("PAUSE");
                                           system ("cls");
                                           Menu_inicial ();
	      	        	 break;
		  }
}

#endif // MENU_H_INCLUDED
