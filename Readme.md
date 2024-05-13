# RoadEsp32

Implementacja własnego RoadBook'a na ESP32 S3/C3, LCD 240x280 (ST7789V2), SPI SdCard, I2C GNSS, I2C ekspander do obsługi potencjalnie kliku przycisków (obecnie myślę bazować na 2-ch).

## Sterowanie
Przy ograniczonej ilości przycisków możliwych do obsługi kciukiem, dostawionych do manetki przy lewej ręce, stawiam na 2 przyciski: następny, poprzedni, oba przyciśnięte ok 1s (akceptacja/wyjście).

## Trasy
Tras będą przynajmniej początkowo plikami zawierającymi json z określoną strukturą która dopiero się definiuje. Wszystkie trasy powinny się znajdować na karcie SD w folderze `routes`. Na razie nie implementuje obsługi struktury podfolderów - acz może to być przydatne w przyszłości.

### Stan

Większość kodu to sklejanka PoC "na szybko" by przetestować komponenty i możliwości komunikacji z nimi.