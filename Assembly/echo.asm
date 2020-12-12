TITLE PGM4_1:   DISPLAYS A CHARACTER TYPED ON THE KEYBOARD ON SCREEN
.MODEL  SMALL
.STACK  100H
.CODE
MAIN    PROC
;
;displays the character '?' on the screen
        MOV AH,2   ;function to display character
        MOV DL,'?' ;moves the character to the register
        INT 21H    ;interruption

;entrada do caracter pelo teclado
        MOV AH,1     ;funcao para leitura de caracter
        INT 21H         ;caracter e' lido em AL
        MOV BL,AL   ;salvando-o em BL

;movendo de linha
        MOV AH,2        ;funcao para exibir caracter
        MOV DL,0DH    ;caracter  <CR> - return
        INT 21H         	  ;executando
        MOV DL,0AH  	  ;caracter <LF> - line feed
        INT 21H         	  ;executando exibindo na 
				  ;tela o caracter lido: efeito 
		  		  ; de ECO
        MOV DL,BL       ;recuperando caracter salvo
        INT 21H         	  ;exibir

;retorno ao DOS
        MOV AH,4CH    ;funcao para saida
        INT 21H         	  ;saindo

MAIN    ENDP
END MAIN
