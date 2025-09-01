#include <stdio.h>

int main() {

    // WRITE A FILE

    FILE *pFile = fopen("C:\\Users\\フレンチ\\Desktop\\output.txt", "w");
    // "w" for write mode | "r" for read mode

    //FILE *pFILE = NULL;
    // NULL is a pointer nothing (address 0)

    char text[] ='''雨のちハレルヤ - Ame Nochi Hallelujah
                    Miki Matsubara • Revue • 2015

                    つくりかけてるサラダから
                    水が微笑む朝
                    何かいい事ありそうな
                    そんな予感がするのよ

                    ラジオから流れてる
                    ハイウェイ情報ききながら
                    けんかした　あなたに　モーニング・コール

                    雨のち”ハレルヤ”ハロー”ハレルヤ”
                    恋が近づく感じなの
                    雨のち”ハレルヤ”ハロー”ハレルヤ”
                    昨日までがまるでウソみたい・・・ふたり

                    こんな気持になるなんて
                    まるで久しぶりね
                    レインシューズもかわいそう
                    こんな私の気まぐれ

                    ドライブに決めたのよ
                    突然で悪いけど
                    映画なら”太陽がいっぱい”

                    雨のち”ハレルヤ”ハロー”ハレルヤ”
                    恋を感じる季節なの
                    雨のち”ハレルヤ”ハロー”ハレルヤ”
                    昨日までがまるで　ウソみたい

                    雨のち”ハレルヤ”ハロー”ハレルヤ”
                    恋を感じる季節なの
                    雨のち”ハレルヤ”ハロー”ハレルヤ”
                    昨日までがまるで　ウソみたい

                    ふたり（このまま）
                    天気（涼好）
                    ふたり（このまま）
                    天気（涼好）'''

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1; // This serves as an exit code
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    fclose(pFile);

    return 0;
}