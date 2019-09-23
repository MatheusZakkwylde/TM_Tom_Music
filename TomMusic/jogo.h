#ifndef JOGO_H_INCLUDED
#define JOGO_H_INCLUDED

#include <iostream>
#include <locale>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <windows.h>
#define T 400

#include "sons.h"
#include "structp.h"
#include "rondomico.h"

using namespace std;

void cadastro_do_jogo () {

	         if ((arquivo = fopen ("cadastro.txt","ab")) == NULL){
	         	                     Beep (550,T);
		             cout <<"                                     #ERRO"<<endl;
		             system ("PAUSE");
		             exit (1);
		        
	            }

	                 do{
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
						  cout <<endl<<endl<<endl;
         

	                        printf("        NOME : ");
	                        scanf ("%s",&cad.Nome);
	                        printf("\n\n");
	                        
	                        setbuf (stdin,NULL);

	                        printf("        SENHA : ");
	                        scanf ("%d",&cad.senha);
	                        printf("\n\n");
	                        
	                        cad.pontuacao;
	                        setbuf (stdin,NULL);

	                     cout <<"      INICIAR-1                                                  EDITAR-2"<<endl;
                         cin>>Opcao;
                                                                 system ("cls");

                    }while (Opcao == 2);

	                      if (fwrite (&cad,sizeof(struct cadastro),1,arquivo)== 1){

	  	                         cout <<endl<<endl<<endl<<endl;
	  	                         cout <<"                                     SUCESSO!"<<endl;
	  	                         cout <<endl<<endl<<endl<<endl<<endl<<endl;
	  	                                   system ("PAUSE");
	                      }else{

	  	                     cout <<"OCORREU UM ERROR"<<endl;
	                      }
	                                printf ("\n\n");
	                             fclose (arquivo);
	                             
	                             system ("cls");
	                             
	                                Login ();
}

void Login () {

	      cout <<endl;
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
	      cout <<endl<<endl;

	      cout <<"                            WELCOME TO TOM MUSIC"<<endl<<endl;
          cout <<"                                   LOGIN"<<endl;


	        cout <<endl<<endl;
	        cout <<"       JOGAR-1                                               VOLTAR-2"<<endl;

            cin >> Opcao;
                                         system ("cls");
                switch (Opcao){

        	           case 1 :

        		           if ((arquivo = fopen ("cadastro.txt","r")) == NULL){

		                       cout <<"                                       #ERRO"<<endl;
		                                         system ("PAUSE");
		                        exit (1);
	                            }
	                            
	                               cout <<endl<<endl;
	                               cout <<"                                      LOGIN"<<endl<<endl;
	                               
        		                   printf("           SENHA OU NOME : ");
	                               scanf ("%s",pesquisa);
	                    
	                                            system ("cls");
	                                            
        		               while (!feof(arquivo)){
                                           //FREAD PEGA REGITRO DE UM EM UM 
		                             if (fread (&cad,sizeof (struct cadastro),1,arquivo)== 1){

			                             if (strcmp (cad.Nome,pesquisa) == 0 || cad.senha == atoi (pesquisa)){
			                             	
			                   	            printf ("\n\n");
			                   	            
			                   	            printf("      JOGADOR : %s\n\n",cad.Nome);

			                   	            printf("      PONTUAÇÃO : %d",cad.pontuacao);
			                   	            
			                   	            cout<<endl<<endl<<endl<<endl<<endl<<endl;
			                   	                       system ("PAUSE");
			                   	                        system ("cls");
			                   	                        
			 	                                       numero_corrente = contador + 1;//NUMERO CORRETE GRAVA NUMERO DO REGISTRO
			 	                              break;
			                         }
	                               }
	                                                   contador ++;//CONTA QUANTO REGISTROS
	                            }

					                      if(numero_corrente == 0){

	   	                                  cout <<endl<<endl;
                                          cout <<"                                        #INVALIDO"<<endl;
                                                 Beep (550,T);
                                                 
                                                 system ("PAUSE");
                                                 system ("cls");
                                                 
                                                 Login ();
	                       }
	                                                fclose (arquivo);
	                                                Menu_secundario ();
	                  break;
	                  
	                  case 2:
	        	                                     Menu_inicial ();
	        	      break;

	        	  }

}


void Menu_secundario () {

	        cout <<endl<<endl<<endl<<endl;
				                            system ("color 01");
		    cout <<"     ----------  ------  --   --     --   --  --  --  -----  --  ------ "<<endl;
		                                        Sleep (30);
		                                    system ("color 06");
		    cout <<"    |          ||      ||       |   |       ||  ||  ||     ||  ||      |"<<endl;
		                                        Sleep (30);
		                                    system ("color 04");
		    cout <<"     ---    --- |      ||       |   |       ||  ||  ||   -- |  ||   --- "<<endl;
		                                        Sleep (100);
		                                    system ("color 02");
		    cout <<"        |  |    |      ||       |   |       ||  ||  ||  |   |  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 0F");
		    cout <<"        |  |    |      ||       |   |       ||  ||  ||   -- |  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 01");
		    cout <<"        |  |    |      ||       |   |       ||  ||  ||     ||  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 09");
		    cout <<"        |  |    |      ||       |   |       ||  ||  | --   ||  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 04");
		    cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  |   |  ||  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 09");
		    cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  | --   ||  ||   --- "<<endl;
		                                        Sleep (100);
		                                    system ("color 04");
		    cout <<"        |  |    |      ||  | |  |   |  | |  ||      ||     ||  ||      |"<<endl;
		                                        Sleep (100);
		                                    system ("color 09");
		    cout <<"         --      ------  --   --     --   --  ------  -----  --  ------ "<<endl;
		                                        Sleep (100);
		    cout <<endl<<endl;

	        cout <<"                                    MENU                                      "<<endl;
	                                            system ("color 01");
            cout <<"                                  INICIAR-1                                   "<<endl;
                                                     Sleep (100);
                                                system ("color 06");
            cout <<"                               CONFIGURAÇÕES-2                                "<<endl;
                                                     Sleep (100);
                                                system ("color 04");
            cout <<"                                    SAIR-3                                    "<<endl;
                                                     Sleep (100);
                                                system ("color 09");
                cin >>Opcao ;
                
                system ("cls");
                
                      switch (Opcao){
                      	
                	           case 1 :
                	           	
                		             Nivel_1 ();
                		             
                		        break;
                		        
                	           case 2 :
                	           	
                		             configuracoes ();
                		             
                		        break;
                		        
                	           case 3 :

                		             cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	      	        	             cout <<"                                  DESEJA SAIR-1 ?NÃO-2 ? ";
	      	        	             cin >> Opcao;
	      	        	                                 system ("cls");
	      	        	                                 
	      	             	                 switch (Opcao){
	      	             	                 	
						                               case 1 :
						                               	
	      	        	                                cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            	                                        cout <<"                                     TRANK YOU"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            	                                                           escolha =1;
                                                                              system ("PAUSE");
                                               break;

                                               case 2 :
                                	
                             	                  Menu_secundario ();
                             	       
                               	               break;

                               	               default :
                               		
                               		                     Beep (550,T);
                               		         
                               		                     cout <<endl<<endl<<endl<<endl;
                                                         cout <<"                                      #INVALIDO"<<endl;
                                                                              system ("PAUSE");
                                                                              system ("cls");
                                                                              Menu_secundario ();
                               	                break;
                                            }
                                            
                	           break;
                	           
                	           default :
                		                   Beep (550,T);
                		              cout <<endl<<endl<<endl<<endl;
                                      cout <<"                                      #INVALIDO"<<endl;
                                                       system ("PAUSE");
                                                       system ("cls");
                                                       
                                                      Menu_secundario ();
                	          break;
				}


}


void Nivel_1() {

                 while (cad.pontuacao > 0 && cad.pontuacao < 5500 && life >= 1 && escolha2 == 0){

						   rondomico = valor_rondomico(valor);

	                                   // Algoritimo de ( Do ).
	                    if (rondomico == 1){

	                         cout <<endl<<endl;
	                         cout <<"                                       TOM MUSIC "<<endl<<endl;
	                         cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl<<endl;
	                         cout <<"                LIFE : " <<life<<endl<<endl<<endl;

	                         cout <<"                OUVIR O TOM ? = 1 . ";
	                         cin >> Opcao;
	                         cout <<endl;
	                         	             // som de Do
	                              do{
	                         	       if (escolha == 1){

	                         	 	      PlaySound(TEXT("sons\\CDo.wav"), NULL, SND_FILENAME);
	                         	 	      
								         }else {
								        	
								  	      PlaySound(TEXT("sons\\1Do.wav"), NULL, SND_FILENAME);
								          }
                                            cout <<endl;
	                         	            cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2 ?";
	                         	            cin >> teclas.digito;
	                         	                              system ("cls");

							        }while(teclas.digito ==1);
							        
	                                  cout <<endl<<endl;
	                                  cout <<"                QUAL É O TOM ? ";
	                                  cin >> teclas.tom;
	                                  cout<<endl<<endl;

	                                    if (!strcmp(teclas.tom,"do")||!strcmp(teclas.tom,"DO")){

	                                       cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                       som_aplausos ();
	                                       cout <<"                PROXIMA TOM!"<<endl<<endl;

	                                             cad.pontuacao = cad.pontuacao + 1000;
	                                             life++;
	                                                     system ("PAUSE");
	                                                     system ("cls");
	                                     }else{
                                                               //vaias
	                                        cout <<"                VOCÊ ERROU!. A NOTA CERTA É : DO"<<endl<<endl;
	                                                  som_vaias ();
	                                        cout <<"                PROXIMO TOM."<<endl<<endl;
	                                        
	                                                 cad.pontuacao =cad.pontuacao -500;
	                                                  life --;
	                                                  system ("PAUSE");
	                                                  system ("cls");
	                             }

	                      }else if (rondomico == 2){

	                                                // Algoritimo de( RE ).
	                         cout <<endl<<endl;
	                         cout <<"                                      TOM MUSIC "<<endl<<endl;
	                         cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                         cout <<"                LIFE: " <<life<<endl<<endl<<endl;

	                         cout <<"                OUVIR O TOM ? = 1.";
	                         cin >>Opcao;
	                         cout <<endl;
	                         	                     // som de RE.
	                             do{
	                             	  if (escolha == 1){
	                             	  	
	                             		 PlaySound(TEXT("sons\\DRe.wav"), NULL, SND_FILENAME);
	                             		 
									   }else{
									   	
									 	 PlaySound(TEXT("sons\\2Re.wav"), NULL, SND_FILENAME);
									   }
                                         cout <<endl;
	                         	         cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2 ";
	                         	         cin >> teclas.digito;
	                         	         
	                         	                     system ("cls");
	                         	                     
							 }while(teclas.digito ==1);
							 
	                              cout <<endl<<endl;
	                              cout <<"                QUAL É O TOM ? ";
	                              cin >> teclas.tom;
	                              cout <<endl<<endl;

	                                  if (!strcmp (teclas.tom,"re") ||!strcmp (teclas.tom,"RE")){

	                                  cout <<"               MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                           som_aplausos ();
	                                  cout <<"               PROXIMA TOM."<<endl<<endl;
	                                  
	                                        cad.pontuacao = cad.pontuacao + 1000;
	                                        life ++;
	                                            system ("PAUSE");
	                                            system ("cls");
	                                 }else{
                                                   //risada.
	                                    cout <<"                VOCÊ ERROU!. A NOTA CERTA É : RÉ"<<endl<<endl;
	                                             som_risada ();
	                                    cout <<"                PROXIMO TOM."<<endl<<endl;
	                                    cad.pontuacao = cad.pontuacao - 500;
	                                    life--;
	                                              system ("PAUSE");
	                                              system ("cls");
	                                    }

	                      } else if (rondomico == 3){
	                      	
	                                                // Algoritimo do tom ( MI ).
	                            cout <<endl<<endl;
	                            cout <<"                                   TOM MUSIC "<<endl<<endl;
	                            cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                            cout <<"                LIFE: " <<life<<endl<<endl<<endl;

	                            cout <<"                OUVIR O TOM ? = 1.";
	                            cin >>Opcao;
	                            cout <<endl;
	                         	              // som de Mi
	                                do{
                                        if (escolha == 1){
                                        	
                                           PlaySound(TEXT("sons\\EMi.wav"), NULL, SND_FILENAME);
                                           
										}else {
											
										    PlaySound(TEXT("sons\\3Mi.wav"), NULL, SND_FILENAME);
										}
										  cout <<endl;
	                         	          cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2 ";
	                         	          cin >> teclas.digito;
	                         	          
	                         	                           system ("cls");

							           }while(teclas.digito ==1);
							           
	                                          cout <<endl<<endl;
	                                          cout <<"                QUAL É O TOM ? ";
	                                          cin >> teclas.tom;
	                                          cout<<endl<<endl;

	                                     if (!strcmp(teclas.tom,"mi")||!strcmp (teclas.tom,"MI")){

	                                         cout <<"               MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                                  som_aplausos ();
	                                         cout <<"               PROXIMA TOM."<<endl<<endl;
	                                         
	                                                 cad.pontuacao = cad.pontuacao + 1000;
	                                                 life ++;
	                                                       system ("PAUSE");
	                                                       system ("cls");
	                                         }else{
                                                                         //risada
	                                             cout <<"                VOCÊ ERROU!. A NOTA CERTA É : ME "<<endl<<endl;
	                                                       som_risada ();
	                                             cout <<"                PROXIMO TOM."<<endl<<endl;
	                                             
	                                                     cad.pontuacao = cad.pontuacao - 500;
	                                                     life --;
	                                                              system ("PAUSE");
	                                                              system ("cls");
	                                }
	                                            // Algoritimo do ( FÁ ).
	                      }else  if (rondomico == 4){
	                      	
	                         cout <<endl<<endl;
	                         cout <<"                                   TOM MUSIC "<<endl<<endl;
	                         cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                         cout <<"                LIFE: " <<life<<endl<<endl<<endl;

	                         cout <<"                OUVIR O TOM ? = 1.";
	                         cin >>Opcao;
	                         cout <<endl;
	                         	                // som de fa
	                         do{
                                    if (escolha == 1){
                                    	
                                    	 PlaySound(TEXT("sons\\FFa.wav"), NULL, SND_FILENAME);
                                    	 
									}else {
										
										 PlaySound(TEXT("sons\\4Fa.wav"), NULL, SND_FILENAME);
									}
									   cout <<endl;
	                         	       cout <<"                 OUVIR NOVAMENTE-1 ? NÃO-2 ?";
	                         	       cin >> teclas.digito;
	                         	                        system ("cls");

							 }while(teclas.digito ==1);
							 
	                           cout <<endl<<endl;
	                           cout <<"                QUAL É O TOM ? ";
	                           cin >> teclas.tom;
	                           cout<<endl<<endl;

	                                if (!strcmp(teclas.tom,"fa")||!strcmp (teclas.tom,"FA")){
                                                  //aplausos
	                                      cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                            som_aplausos ();
	                                      cout <<"                PROXIMO TOM."<<endl<<endl;
	                                      
	                                                cad.pontuacao = cad.pontuacao + 1000;
	                                                life ++;
	                                                
	                                                       system ("PAUSE");
	                                                       system("cls");
	                                    }else{
                                                        //vaias
	                                       cout <<"                VOCÊ ERROU!. A NOTA CERTA É : FA"<<endl<<endl;
	                                                som_vaias ();
	                                       cout <<"                PROXIMO TOM"<<endl<<endl;
	                                       
	                                            cad.pontuacao = cad.pontuacao -500;
	                                            life --;
	                                                          system ("PAUSE");
	                                                          system("cls");
	                                }
	                                                     //Algoritimo do ( SOL ).
	                       }else if (rondomico == 5){
	                       	
	                          cout <<endl<<endl;
	                          cout <<"                                   TOM MUSIC "<<endl<<endl;
	                          cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                          cout <<"                LIFE: " <<life<<endl<<endl<<endl;

	                          cout <<"                OUVIR O TOM ? = 1.";
	                          cin >>Opcao;
	                          cout <<endl;
	                         	                         // som de sol
	                              do{
                                         if (escolha ==1){
                                         	
                                         	 PlaySound(TEXT("sons\\GSol.wav"), NULL, SND_FILENAME);
                                         	 
										 }else {
										 	
										 	 PlaySound(TEXT("sons\\5Sol.wav"), NULL, SND_FILENAME);
										 }
										   cout <<endl;
	                         	           cout <<"                 OUVIR NOVAMENTE-1 ? NÃO-2 ";
	                         	           cin >> teclas.digito;
	                         	                          system ("cls");

							        }while(teclas.digito==1);
							        
	                                  cout <<endl<<endl;
	                                  cout <<"                QUAL É O TOM ? ";
	                                  cin >> teclas.tom;
	                                  cout<<endl<<endl;

	                                     if (!strcmp(teclas.tom,"sol")||!strcmp (teclas.tom,"SOL")){
                                                     //aplausos.
	                                          cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                               som_aplausos ();
	                                          cout <<"                PROXIMA TOM."<<endl<<endl;
	                                          
	                                                    cad.pontuacao = cad.pontuacao + 1000;
	                                                    life ++;
	                                                           system ("PAUSE");
	                                                           system ("cls");
	                                        }else{
                                                           //risada.
	                                           cout <<"                VOCÊ ERROU!. A NOTA CERTA É : SOL"<<endl<<endl;
	                                                  som_risada ();
	                                           cout <<"                PROXIMO TOM."<<endl<<endl;
	                                           
	                                                    cad.pontuacao = cad.pontuacao - 500;
	                                                    life --;
	                                                    
	                                                            system ("PAUSE");
	                                                            system ("cls");
	                                  }
	                                                  //Algoritimo do ( LÁ )
	                      }else if (rondomico == 6){
	                          cout <<endl<<endl;
	                          cout <<"                                  TOM MUSIC"<<endl<<endl;
	                          cout <<"                 POINTS : "<<cad.pontuacao<<endl<<endl;
	                          cout <<"                 LIFE: " <<life<<endl<<endl<<endl;

	                          cout <<"                 OUVIR O TOM ? = 1 ";
	                          cin >>Opcao;
	                          cout <<endl;
	                         	                      // som de la
	                             do{
	                             	 if (escolha ==1){
	                             	 	
	                             	 	 PlaySound(TEXT("sons\\ALa.wav"), NULL, SND_FILENAME);
	                             	 	 
									  }else {
									  	
									  	 PlaySound(TEXT("sons\\6La.wav"), NULL, SND_FILENAME);
									  }
									    cout <<endl;
	                         	        cout <<"                OUVIR NOVAMENTE-1 ?NÃO-2 ";
	                         	        cin >> teclas.digito;
	                         	        
	                         	                    system("cls");

							       }while(teclas.digito==1);
							       
	                                 cout <<endl<<endl;
	                                 cout <<"                QUAL É O TOM ? ";
	                                 cin >> teclas.tom;
	                                 cout<<endl<<endl;

	                                    if (!strcmp(teclas.tom,"la")||!strcmp (teclas.tom,"LA")){
                                                      //aplausos.
	                                         cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                               som_aplausos ();
	                                         cout <<"                PROXIMA TOM."<<endl<<endl;
	                                         
	                                                   cad.pontuacao =cad.pontuacao + 1000;
	                                                   life ++;
	                                                            system ("PAUSE");
	                                                            system ("cls");
	                                        }else{
                                                            //vaias.
	                                            cout <<"                VOCÊ ERROU!. A NOTA CERTA É : LÁ"<<endl<<endl;
	                                                      som_vaias ();
	                                            cout <<"                PROXIMO TOM"<<endl<<endl;
	                                            
	                                                  cad.pontuacao =cad.pontuacao- 500;
	                                                  life --;
	                                                                 system ("PAUSE");
	                                                                 system ("cls");
	                                          }
	                                                  //Algoritimo do ( SÍ ).
	                      }else if (rondomico == 7){
	                         cout <<endl<<endl;
	                         cout <<"                                  TOM MUSIC "<<endl<<endl;
	                         cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                         cout <<"                LIFE : " <<life<<endl<<endl<<endl;

	                         cout <<"                OUVIR O TOM  ? = 1. ";
	                         cin >>Opcao;
	                         cout <<endl;
	                         	                      // som de si
	                             do{
	                             	 if (escolha == 1){
	                             	 	
	                             	 	 PlaySound(TEXT("sons\\BSi.wav"), NULL, SND_FILENAME);
	                             	 	 
									  }else {
									  	
									  	 PlaySound(TEXT("sons\\7Si.wav"), NULL, SND_FILENAME);
									  }
                                           cout <<endl;
	                         	           cout <<"                OUVIR NOVAMENTE-1 ?NÃO-2 "<<endl;
	                         	           cin >> teclas.digito;
	                         	           
                                                          system ("cls");
                                                          
							       }while(teclas.digito==1);
							       
	                                 cout <<endl<<endl;
	                                 cout <<"                QUAL É O TOM ? ";
	                                 cin >> teclas.tom;
	                                 cout<<endl<<endl;

	                                    if (!strcmp(teclas.tom,"si")||!strcmp (teclas.tom,"SI")){
                                                   //aplausos
	                                        cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                               som_aplausos ();
	                                        cout <<"                PROXIMA TOM."<<endl<<endl;
	                                           
	                                                   cad.pontuacao = cad.pontuacao +1000;
	                                                   life ++;
	                                                        system ("PAUSE");
	                                                        system ("cls");
	                                      }else{
                                                    //risada
	                                         cout <<"               VOCÊ ERROU!. A NOTA CERTA É : SÍ"<<endl<<endl;
	                                                 som_risada ();
	                                         cout <<"               PROXIMO TOM"<<endl<<endl;
	                                         
	                                         cad.pontuacao = cad.pontuacao - 500;
	                                         life--;
	                                                                 system ("PAUSE");
	                                                                 system ("cls");
	                                     }
	                       }
                                    
	                                modificando_arquivo ();
	                             
	                            cout <<endl<<endl<<endl<<endl;
	                            cout <<"                                       CONTINUAR-1"<<endl;
	                            cout <<"                                          SAIR-2"<<endl<<endl;
	                            cin >> Opcao;

	                                       switch (Opcao){
	                                       	
	                            	                  case 1:
	                                                       system ("cls");
	                        	                             Nivel_1();
	                        	                      break;
	                        	                      
	                        	                      case 2:
	                        	                      	
	                        	          	                 escolha2 = 1;
	                        	          	                system ("PAUSE");
	                        	          	          
	                        	    	               break;
	                        	    	               
	                        	                       default :
	                        	    	                                Beep (550,T);
                               		                   cout <<endl<<endl<<endl<<endl;
                                                       cout <<"                                      #INVALIDO"<<endl;
                                                       system ("PAUSE");
                                                       system ("cls");
                                                       
                                                       break;

							    }
						}
						              gravacao ();
						              
                                 // Chamada do nivel dois.
	    	                        if (cad.pontuacao == 5500){
	    	                                 nivel_2 ();
									}
	    	                                if (life == 0){

	                                            cout <<endl<<endl<<endl<<endl<<endl<<endl;
	                                            cout <<"                                  GAME OVER"<<endl<<endl;
	                                            
	                                                     PlaySound(TEXT("sons\\GameOver.wav"), NULL, SND_FILENAME);
	                                                     
	                                                             system ("cls");
	                                                             
	                                                             life =3;
	                                                             cad.pontuacao =1500;
	                                                             Menu_secundario ();
	    	                                    }


}

void nivel_2 () {

	         while (cad.pontuacao > 0 && cad.pontuacao < 11000 && life >= 1 && escolha2 == 0){

						    rondomico = valor_rondomico(valor);

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

	                           // Algoritimo de (DO#).
	                    if (rondomico == 1){

	                         cout <<endl<<endl;
	                         cout <<"                                        TOM MUSIC "<<endl<<endl;
	                         cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl<<endl;
	                         cout <<"                LIFE : " <<life<<endl<<endl<<endl;

	                         cout <<"                OUVIR O TOM ? = 1 . ";
	                         cin >>Opcao;
	                         cout <<endl;
	                         	               // som de Do#
	                             do{
	                             	 if (escolha == 1){
	                             	 	
	                             	 	PlaySound(TEXT("sons\\CDo#.wav"), NULL, SND_FILENAME);
	                             	 	
									  }else {
									  	
									  	    PlaySound(TEXT("sons\\1Do#.wav"), NULL, SND_FILENAME);
									  }
                                          cout <<endl;
	                         	          cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2";
	                         	          cin >> teclas.digito;
	                         	          system ("cls");

							       }while(teclas.digito ==1);
							       
	                                cout <<endl<<endl;
	                                cout <<"                QUAL É O TOM ? ";
	                                cin >> teclas.tom;
	                                cout<<endl<<endl;

	                                 if (!strcmp(teclas.tom,"do#")||!strcmp(teclas.tom,"DO#")){
                                                //aplausos
	                                    cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                            som_aplausos ();
	                                    cout <<"                PROXIMA TOM."<<endl<<endl;
	                                    
	                                             cad.pontuacao = cad.pontuacao + 1000;
	                                             life++;
	                                              system ("PAUSE");
	                                              system ("cls");
	                             }else{
                                             //vaias.
	                                cout <<"                VOCÊ ERROU!. A NOTA CERTA É : DO#"<<endl<<endl;
	                                         som_vaias ();
	                                cout <<"                PROXIMO TOM."<<endl<<endl;
	                                
	                                          cad.pontuacao =cad.pontuacao -500;
	                                          life --;
	                                                         system ("PAUSE");
	                                                         system ("cls");
	                             }

	                      }else if (rondomico == 2){

	                                                  // Algoritimo de(Re#).
	                         cout <<endl<<endl;
	                         cout <<"                                        TOM MUSIC "<<endl<<endl;
	                         cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                         cout <<"                LIFE: " <<life<<endl<<endl<<endl;

	                         cout <<"                OUVIR O TOM ? = 1.";
	                         cin >>Opcao;
	                         cout <<endl;
	                         	                    // som de Re#
	                             do{
	                             	 if (escolha == 1){
	                             	 	
	                             	 	PlaySound(TEXT("sons\\DRe#.wav"), NULL, SND_FILENAME);
	                             	 	
									  }else {
									  	
									  	PlaySound(TEXT("sons\\2Re#.wav"), NULL, SND_FILENAME);
									  }
                                          cout <<endl;
	                         	          cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2 ";
	                         	          cin >> teclas.digito;
	                         	          system("cls");

							       }while(teclas.digito==1);
	                                cout <<endl<<endl;
	                                cout <<"                QUAL É O TOM ? ";
	                                cin >> teclas.tom;
	                                cout <<endl<<endl;

	                                  if (!strcmp (teclas.tom,"re#") ||!strcmp (teclas.tom,"RE#")){
                                               //aplausos
	                                  cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                           som_aplausos ();
	                                  cout <<"                PROXIMA TOM."<<endl<<endl;
	                                  
	                                           cad.pontuacao = cad.pontuacao + 1000;
	                                           life ++;
	                                                  system ("PAUSE");
	                                                  system ("cls");
	                                 }else{
                                                  //vaias.
	                                    cout <<"               VOCÊ ERROU!. A NOTA CERTA É : RÉ#"<<endl<<endl;
	                                             som_vaias ();
	                                    cout <<"               PROXIMO TOM!"<<endl<<endl;
	                                    
	                                                  cad.pontuacao = cad.pontuacao - 500;
	                                                  life--;
	                                                     system ("PAUSE");
	                                                     system ("cls");
	                                    }

	                      } else if (rondomico == 3){
	                                              // Algoritimo do tom ( fa# ).
	                            cout <<endl<<endl;
	                            cout <<"                                        TOM MUSIC "<<endl<<endl;
	                            cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                            cout <<"                LIFE: " <<life<<endl<<endl<<endl;

	                            cout <<"                OUVIR O TOM ? = 1.";
	                            cin >>teclas.digito;
	                            cin >>Opcao;
	                            cout <<endl;
	                         	                   // som de Do fa#
	                             do{
                                       if (escolha == 1){
                                       	
                                       	   PlaySound(TEXT("sons\\FFa#.wav"), NULL, SND_FILENAME);
                                       	   
									   }else {
									   	
									   	  PlaySound(TEXT("sons\\3Fa#.wav"), NULL, SND_FILENAME);
									   }
									       cout <<endl;
	                         	           cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2";
	                         	           cin >> teclas.digito;
	                         	           system ("cls");

							       }while(teclas.digito ==1);
	                                  cout <<endl<<endl;
	                                  cout <<"                QUAL É O TOM ? ";
	                                  cin >> teclas.tom;
	                                  cout<<endl<<endl;

	                                     if (!strcmp(teclas.tom,"fa#")||!strcmp (teclas.tom,"FA#")){
                                                      //aplausos
	                                         cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                                 som_aplausos ();
	                                         cout <<"                PROXIMA TOM."<<endl<<endl;
	                                         
	                                                  cad.pontuacao = cad.pontuacao + 1000;
	                                                  life ++;
	                                                           system ("PAUSE");
	                                                           system ("cls");
	                                         }else{
                                                          //risada.
	                                             cout <<"               VOCÊ ERROU!. A NOTA CERTA É : FA# "<<endl<<endl;
	                                                     som_risada ();
	                                             cout <<"               PROXIMO TOM!"<<endl<<endl;
	                                             cad.pontuacao = cad.pontuacao - 500;
	                                             life --;
	                                                          system ("PAUSE");
	                                                          system ("cls");
	                                }
	                                            // Algoritimo do ( SOL#).
	                      }else  if (rondomico == 4){
	                         cout <<endl<<endl;
	                         cout <<"                                        TOM MUSIC "<<endl<<endl;
	                         cout <<"                        POINTS : "<<cad.pontuacao<<endl<<endl;
	                         cout <<"                        LIFE: " <<life<<endl<<endl<<endl;

	                         cout <<"                        OUVIR O TOM ? = 1.";
	                         cin >>Opcao;
	                         cout <<endl;
	                         	                   // som de sol#
	                             do{
	                             	   if (escolha == 1){
	                             	   	
	                             	   	     PlaySound(TEXT("sons\\GSol#.wav"), NULL, SND_FILENAME);
	                             	   	     
										}else{
											
										   	 PlaySound(TEXT("sons\\4Sol#.wav"), NULL, SND_FILENAME);
										}
                                           cout <<endl;
	                         	           cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2 ";
	                         	           cin >> teclas.digito;
	                         	           system ("cls");

							       }while(teclas.digito ==1);
	                                cout <<endl<<endl;
	                                cout <<"                QUAL É O TOM ? ";
	                                cin >> teclas.tom;
	                                cout<<endl<<endl;

	                                if (!strcmp(teclas.tom,"sol#")||!strcmp (teclas.tom,"SOL#")){
                                                   //aplausos
	                                      cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                              som_aplausos ();
	                                      cout <<"                PROXIMO TOM!"<<endl<<endl;
	                                      cad.pontuacao = cad.pontuacao + 1000;
	                                      life ++;
	                                                            system ("PAUSE");
	                                                            system("cls");
	                                    }else{
                                                    //vaias
	                                       cout <<"                VOCÊ ERROU!. A NOTA CERTA É : SOL#"<<endl<<endl;
	                                                som_vaias ();
	                                       cout <<"                PROXIMO TOM"<<endl<<endl;
	                                       cad.pontuacao = cad.pontuacao -500;
	                                       life --;
	                                                                 system ("PAUSE");
	                                                                 system("cls");
	                                }
	                                                //Algoritimo do (LA#).
	                       }else if (rondomico == 5){
	                          cout <<endl<<endl;
	                          cout <<"                                        TOM MUSIC "<<endl<<endl;
	                          cout <<"                POINTS : "<<cad.pontuacao<<endl<<endl;
	                          cout <<"                LIFE: " <<life<<endl<<endl<<endl;

	                          cout <<"                OUVIR O TOM ? = 1.";
	                          cin >>Opcao;
	                          cout <<endl;
	                         	                  // som de La#
	                             do{
                                      if (escolha == 1){
                                      	PlaySound(TEXT("sons\\ALa#.wav"), NULL, SND_FILENAME);
									  }else {
									  	PlaySound(TEXT("sons\\5La#.wav"), NULL, SND_FILENAME);
									  }
									  cout <<endl;
	                         	      cout <<"                 OUVIR NOVAMENTE-1 ?NÃO-2 "<<endl;
	                         	      cin >> teclas.digito;
                                               system ("cls");
							       }while(teclas.digito ==1);
	                                  cout <<endl<<endl;
	                                  cout <<"                QUAL É O TOM ? ";
	                                  cin >> teclas.tom;
	                                  cout<<endl<<endl;

	                                     if (!strcmp(teclas.tom,"la#")||!strcmp (teclas.tom,"LA#")){
                                                   //aplausos
	                                         cout <<"                MUITO BEM VOCÊ ACERTOU!"<<endl<<endl;
	                                             som_aplausos ();
	                                         cout <<"                PROXIMA TOM!"<<endl<<endl;
	                                         cad.pontuacao =cad.pontuacao + 1000;
	                                         life ++;
	                                                       system ("PAUSE");
	                                                       system ("cls");
	                                        }else{
                                                         //risada.
	                                           cout <<"                VOCÊ ERROU!. A NOTA CERTA É : LA#"<<endl<<endl;
	                                                    som_risada ();
	                                           cout <<"                PROXIMO TOM!"<<endl<<endl;
	                                           
	                                                         cad.pontuacao =cad.pontuacao - 500;
	                                                         life --;
	                                                                 system ("PAUSE");
	                                                                 system ("cls");
	                                  }
	                      }
	                                                   cout <<endl<<endl<<endl<<endl;
	                            cout <<"   CONTINUAR-1                                                       SAIR-2"<<endl<<endl;
	                            cin >> Opcao;

	                                       switch (Opcao){
	                                       	
	                            	                  case 1:
	                                                       system ("cls");
	                        	                             Nivel_1();
	                        	                      break;
	                        	                      
	                        	                      case 2:
	                        	                      	
	                        	          	                escolha2 = 1;
	                        	          	                system ("PAUSE");
	                        	          	          
	                        	    	               break;
	                        	    	               
	                        	                       default :
	                        	    	                                Beep (550,T);
                               		                   cout <<endl<<endl<<endl<<endl;
                                                       cout <<"                                      #INVALIDO"<<endl;
                                                       system ("PAUSE");
                                                       system ("cls");
                                                       
                                                       break;

							               }   
                        }
}

void configuracoes (){

	cout <<endl<<endl<<endl<<endl;
				                            system ("color 01");
		    cout <<"     ----------  ------  --   --     --   --  --  --  -----  --  ------ "<<endl;
		                                      Sleep (30);
		                                    system ("color 06");
		    cout <<"    |          ||      ||       |   |       ||  ||  ||     ||  ||      |"<<endl;
		                                        Sleep (30);
		                                    system ("color 04");
		    cout <<"     ---    --- |      ||       |   |       ||  ||  ||   -- |  ||   --- "<<endl;
		                                       Sleep (100);
		                                    system ("color 02");
		    cout <<"        |  |    |      ||       |   |       ||  ||  ||  |   |  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 0F");
		    cout <<"        |  |    |      ||       |   |       ||  ||  ||   -- |  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 01");
		    cout <<"        |  |    |      ||       |   |       ||  ||  ||     ||  ||  |    "<<endl;
		                                        Sleep (100);
		                                    system ("color 09");
		    cout <<"        |  |    |      ||       |   |       ||  ||  | --   ||  ||  |    "<<endl;
		                                       Sleep (100);
		                                    system ("color 04");
		    cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  |   |  ||  ||  |    "<<endl;
		                                       Sleep (100);
		                                    system ("color 09");
		    cout <<"        |  |    |      ||  | |  |   |  | |  ||  ||  | --   ||  ||   --- "<<endl;
		                                        Sleep (100);
		                                    system ("color 06");
		    cout <<"        |  |    |      ||  | |  |   |  | |  ||      ||     ||  ||      |"<<endl;
		                                        Sleep (100);
		                                    system ("color 09");
		    cout <<"         --      ------  --   --     --   --  ------  -----  --  ------ "<<endl;
		                                        Sleep (100);
		    cout <<endl<<endl<<endl;
		    cout <<"                                    MENU                                       "<<endl<<endl;
		                                     system ("color 06");
	        cout <<"                                   RANCK-1                                     "<<endl;
	                                                Sleep (100);
	                                          system ("color 09");
	        cout <<"                                   OPCÕES-2                                     "<<endl;
	        cout <<"  VOLTAR-3                                                                SAIR-4  "<<endl<<endl;

	       cin >> Opcao;

			switch(Opcao){

				case 1:

					    system ("cls");
			            leitura_de_arquivo ();
			            system ("PAUSE");
			            configuracoes ();
				break;

				case 3 :
					   system ("cls");
				      Menu_secundario ();
				break;
				
				case 2 :
					  system ("cls");
					 cout <<endl<<endl;
					 cout <<"                              WELCOME TO TOM MUSIC"<<endl<<endl;
					 cout <<"                                 SOM PREFERECIAL"<<endl<<endl<<endl;
					 cout <<"                                    TECLADO-1"<<endl<<endl;
					 cout <<"                                  CONTRA BAIXO-2"<<endl<<endl;
					 cout <<"  VOLTAR-3"<<endl;
					 cin >> Opcao;

					     switch (Opcao){
					     	case 1 :
					     		
					     		escolha = 1;
					     		system ("cls");
					     		
					     		configuracoes ();
					     		
					     		break;
					     		
					     	case 2 :
					     		
					     		escolha = 2;
					     		system ("cls");
					     		
					     		configuracoes ();
					     		
					     		break;
					     		
					     	case 3 :
					     		
					     		 system ("cls");
					     		 configuracoes ();
					     		 
					     		break;
					     		
					     	default :
					     		cout <<endl<<endl<<endl<<endl;
		                        cout <<"                                      #INVALIDO"<<endl;
		                                        Beep (550,T);
		                                        system ("PAUSE");
		                                        system ("cls");
		                                        configuracoes ();
		                        break;


						 }
					break;

				case 4 :
					    cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl;
			      	    cout <<"                                    DESEJA SAIR-1 ?NÃO-2";
			      	    cin >> Opcao;
			      	    system ("cls");
			      	    switch (Opcao){
						   case 1 :
			      	          cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		            	     cout <<"                                     TRANK YOU"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                                                   escolha=1;
									//colocar som aqui.
		                                        system ("PAUSE");

		                      break;

		                    case 2 :
		                            configuracoes ();
		                            
		                        break;

		                    default :
		                        cout <<endl<<endl<<endl<<endl;
		                        cout <<"                                      #INVALIDO"<<endl;
		                                        Beep (550,T);
		                                        system ("PAUSE");
		                                        system ("cls");
		                                        configuracoes ();
		                               		break;
		                               }
				break;

				default :
					cout <<endl<<endl<<endl<<endl;
		            cout <<"                                      #INVALIDO"<<endl;
		                                                          Beep (550,T);
		                                      system ("PAUSE");
		                configuracoes ();
				break;
			}
}

void gravacao (){

	if ((arquivo = fopen ("instruções.txt","a")) == NULL){

		    cout <<"                                 #ERRO"<<endl;
		                   system ("PAUSE");
		           exit (1);
	        }
                                    cad.Nome;
                                    cad.pontuacao;

	         if (fwrite (&cad,sizeof (struct cadastro),1,arquivo)== 1){

	  	          cout <<"                                       SUCESSO!"<<endl;

	            }else{

	  	            cout <<"                                   OCORREU UM ERROR"<<endl;
	            }
                          printf("\n\n");
	                    fclose (arquivo);
}

void leitura_de_arquivo (){

	    char linha [100];
	    char*conseguirler;
	    char c;

	    if ((arquivo =fopen ("instruções.txt","r"))== NULL){
	    	
	    	cout <<"                                          #ERRO"<<endl;
	    	system ("PAUSE");
	    	exit (1);
		}

	    while (!feof (arquivo)){
	    	
	    	conseguirler =fgets (linha,100,arquivo);
	    	
	    	if (conseguirler){

	    		printf ("%s",linha);
			}

		}

}

void modificando_arquivo(){

	if ((arquivo = fopen ("cadastro.txt","r")) == NULL){

		printf ("                                           #ERRO");
		system ("PAUSE");
		exit (1);
	}
	
	if (numero_corrente == 0){

		printf ("cadastro nao localizado");
   }else {

	                 cad.pontuacao;

	 fseek (arquivo,sizeof (struct cadastro)* (numero_corrente-1),SEEK_SET);//POSICIONA O CURSO DENTRO DA ARQUIVO E COLOCAR NO REGISTRO CORRETO
	 fwrite (&cad,sizeof (struct cadastro),1,arquivo);//FWRITE SOBRE ESCREVE NOARQUIVO.
	 
	 cout <<endl<<endl;
	 cout <<"    PONTUAÇÃO :"<<cad.pontuacao<<endl;
	 cout <<endl<<endl;
    }
    
	 fclose (arquivo);
}

#endif // JOGO_H_INCLUDED
