#include <stdio.h>
#include <stdlib.h>


int main() {
   
    // Variáveis
    float val_prod, preco_m_adic, impos, preco_fin, desc;
    int tipo, refri;
   
    // Coleta de dados
    printf("Preço dos produtos: \n\n");
    printf("Digite o preço do produto: \n");
    scanf("%f", &val_prod);
    printf("Digite o tipo: \n1: Alimentação \n2: Limpeza \n3: Vestuário \n");
    scanf("%d", &tipo);
    printf("O produto precisa de refrigeração? \n1: Sim \n2: Não \n");
    scanf("%d", &refri);
    
   
    // Inicio else-if
    // Precisa de refrigeração
    if (refri == 1 && tipo > 0 && tipo <= 3) {
        // Alimentação
        if (tipo == 1) {
            // Preço adicional + valor produto
            preco_m_adic = val_prod + 8;
            
            // Taxa de imposto
            if (preco_m_adic < 25) {
                impos = preco_m_adic * 0.05;
                desc = 0;
                
                preco_fin = preco_m_adic + impos - desc;
                
                if (preco_fin <= 50) {
                    printf("Um produto alimentício que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                }
                
                else if (preco_fin > 50 && preco_fin < 100) {
                    printf("Um produto alimentício que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                }
                
                else {
                    printf("Um produto alimentício que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                }
            }
            
            // Taxa de imposto
            else {
                impos = preco_m_adic * 0.08;
                desc = 0;
                
                preco_fin = preco_m_adic + impos - desc;
                
                if (preco_fin <= 50) {
                    printf("Um produto alimentício que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                }
                
                else if (preco_fin > 50 && preco_fin < 100) {
                    printf("Um produto alimentício que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                }
                
                else {
                    printf("Um produto alimentício que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                }
            }    
        }
        
        // Limpeza
        else if (tipo == 2) {
            // Preço adicional + valor produto
            preco_m_adic = val_prod + 0;
            
            // Taxa de imposto
            if (preco_m_adic < 25) {
                impos = preco_m_adic * 0.05;
                desc = 0;
                
                preco_fin = preco_m_adic + impos - desc;
                
                if (preco_fin <= 50) {
                    printf("Um produto de limpeza que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                }
                
                else if (preco_fin > 50 && preco_fin < 100) {
                    printf("Um produto de limpeza que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                }
                
                else {
                    printf("Um produto de limpeza que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                }
            }
            
            // Taxa de imposto
            else {
                impos = preco_m_adic * 0.08;
                desc = 0;
                
                preco_fin = preco_m_adic + impos - desc;
                
                if (preco_fin <= 50) {
                    printf("Um produto de limpeza que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                }
                
                else if (preco_fin > 50 && preco_fin < 100) {
                    printf("Um produto de limpeza que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                }
                
                else {
                    printf("Um produto de limpeza que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                }
            } 
        }
        
        // Vestuário
        else {
            // Preço adicional + valor produto
            preco_m_adic = val_prod + 0;
            
            // Taxa de imposto
            if (preco_m_adic < 25) {
                impos = preco_m_adic * 0.05;
                desc = 0;
                
                preco_fin = preco_m_adic + impos - desc;
                
                if (preco_fin <= 50) {
                    printf("Um produto de vestuário que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                }
                
                else if (preco_fin > 50 && preco_fin < 100) {
                    printf("Um produto de vestuário que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                }
                
                else {
                    printf("Um produto de vestuário que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                }
            }
            
            // Taxa de imposto
            else {
                impos = preco_m_adic * 0.08;
                desc = 0;
                
                preco_fin = preco_m_adic + impos - desc;
                
                if (preco_fin <= 50) {
                    printf("Um produto de vestuário que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                }
                
                else if (preco_fin > 50 && preco_fin < 100) {
                    printf("Um produto de vestuário que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                }
                
                else {
                    printf("Um produto de vestuário que necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                    printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                }
            }
        }
    }
    
    // Não precisa de refrigeração
    if (refri == 2 && tipo > 0 && tipo <= 3) {
        // Alimentação
        if (tipo == 1) {
            // Valor produto menor que 15
            if (val_prod < 15) {
                // Preço adicional + valor produto
                preco_m_adic = val_prod + 2;

                // Taxa de imposto
                if (preco_m_adic < 25) {
                    impos = preco_m_adic * 0.05;
                    desc = 0;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }

                // Taxa de imposto
                else {
                    impos = preco_m_adic * 0.08;
                    desc = 0;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
            } // fim Valor produto menor que 15
            
            // valor produto maior igual a 15
            else {
                // Preço adicional + valor produto
                preco_m_adic = val_prod + 2;

                // Taxa de imposto
                if (preco_m_adic < 25) {
                    impos = preco_m_adic * 0.05;
                    desc = 0;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }

                // Taxa de imposto
                else {
                    impos = preco_m_adic * 0.08;
                    desc = 0;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto alimentício que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
            } // fim valor produto maior igual a 15
        } // fim alimentacao
        
        // limpeza
        else if (tipo == 2) {
            //Variação preço adicional
            if (val_prod < 10) {
                // Preço adicional + valor produto
                preco_m_adic = val_prod + 1.5;

                // Taxa de imposto
                if (preco_m_adic < 25) {
                    impos = preco_m_adic * 0.05;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
                
                //taxa imposto
                else {
                    impos = preco_m_adic * 0.08;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
                
            }
            
            // Variação preço adicional qnd preço base >= 10
            if (val_prod >= 10) {
                // Preço adicional + valor produto
                preco_m_adic = val_prod + 2.5;

                // Taxa de imposto
                if (preco_m_adic < 25) {
                    impos = preco_m_adic * 0.05;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
                
                //taxa imposto
                else {
                    impos = preco_m_adic * 0.08;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de limpeza que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
            }
        } // fim limpeza
        
        // vestuário
        else {
            //variação preço adicional qnd preço prod < 30
            if (val_prod < 30) {
                // Preço adicional + valor produto
                preco_m_adic = val_prod + 3;

                // Taxa de imposto
                if (preco_m_adic < 25) {
                    impos = preco_m_adic * 0.05;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
                
                // Taxa de imposto
                else {
                    impos = preco_m_adic * 0.08;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
            }
            
            //variação preço adicional qnd preço prod >= 30
            else {
                // Preço adicional + valor produto
                preco_m_adic = val_prod + 2.5;

                // Taxa de imposto
                if (preco_m_adic < 25) {
                    impos = preco_m_adic * 0.05;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
                
                // Taxa de imposto
                else {
                    impos = preco_m_adic * 0.08;
                    desc = preco_m_adic * 0.03;

                    preco_fin = preco_m_adic + impos - desc;

                    if (preco_fin <= 50) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Barato", impos, desc, preco_fin);
                    }

                    else if (preco_fin > 50 && preco_fin < 100) {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Normal", impos, desc, preco_fin);
                    }

                    else {
                        printf("Um produto de vestuário que não necessite de refrigeração e tenha preço inicial (mais adicionais) igual a R$%0.2f tem: \n", preco_m_adic);
                        printf("Adição de impostos no valor de R$%0.2f \nDesconto de R$%0.2f \nPreço final de R$%0.2f \nÉ classificado como Caro", impos, desc, preco_fin);
                    }
                }
            }
        } // fim vestuário
    }// fim nao necessita refrigeração
    
    else {
        printf("Verifique os números digitados e tente novamente!");
    }
    // Fim else-if
   
   
    return 0;
}