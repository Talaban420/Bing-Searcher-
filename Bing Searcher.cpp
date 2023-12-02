#include <iostream>
#include <Windows.h>
#include <shellapi.h>
#include <cstdlib>

void Count(int number)
{
    std::cout << "Page Number: " << number << " \n";
}

void CallButtons()
{
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));
    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = 0xA2;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = 0x57;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = 0x57;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = 0xA2;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;
    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    if (uSent != ARRAYSIZE(inputs))
    {
        std::cout << "failed To GetLastbutton: 0x%x\n", HRESULT_FROM_WIN32(GetLastError());
    }
}

int main(int argc, char const *argv[])
{
    int count = {};
    ShellExecuteA(0,0,"msedge.exe",0,0, SW_SHOW);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=skulls&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=fire&form=QBLH&sp=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=car&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=bear&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=turkey&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=house&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=games&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=deer&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=burger&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=cheese&qs=n&form=QBRE&sp=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=ketchup&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=juice&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=butter&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=house&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=python&FORM=AWRE", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=youtube&filters=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=food&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=freddy&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=jason&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=gta&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=ak&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=rpg&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=audi&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=bmw&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=dodge&qs=n&form=QBRE&=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=lamborghini&filters=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=ferrari&filters=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=bugatti&filters=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=sprite&qs=AS&pq=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=coke&qs=SS&pq=cok&sc=10-3&cvid=A8E6018C8D1A4210B6519CF5C8CC30F1&FORM=QBRE&sp=1", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=badger&form=QBLH&sp=", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=hyena&qs=OS&pq=hayena&sc=10-6&cvid=AD26BCDD28A84130A319541A09820B84&FORM=QBRE&sp=1", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=lion&filters=ufn%3a%22lion%22+sid%3a%2206704cb2-2650-0cf0-30d3-dc8a8b5cecc4%22&asbe=SS&qs=MB&pq=lio&sc=10-3&cvid=786F7FF4D3EB4D92B1993C3C02270055&FORM=QBRE&sp=1",0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=hippo&qs=ds&form=QBRE", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    ShellExecuteA(0, 0, "https://www.bing.com/search?q=nyc+weather&qs=LS&pq=nyc&sc=10-3&cvid=C51A26CE02B84A769E183DFA4F30148D&FORM=QBLH&sp=1", 0, 0, SW_SHOW);
    Sleep(1750);
    CallButtons();
    Count(count++);
    std::cout << "Done!"
              << R"(.-""""-.
                       / j      \
                      :.d;       ;
                      $$P        :
           .m._       $$         :
          dSMMSSSss.__$$b.    __ :
         :MMSMMSSSMMMSS$$$b  $$P ;
         SMMMSMMSMMMSSS$$$$     :b
        dSMMMSMMMMMMSSMM$$$b.dP SSb.
       dSMMMMMMMMMMSSMMPT$$=-. /TSSSS.
      :SMMMSMMMMMMMSMMP  `$b_.'  MMMMSS.
      SMMMMMSMMMMMMMMM \  .'\    :SMMMSSS.
     dSMSSMMMSMMMMMMMM  \/\_/; .'SSMMMMSSSm
    dSMMMMSMMSMMMMMMMM    :.;'" :SSMMMMSSMM;
  .MMSSSSSMSSMMMMMMMM;    :.;   MMSMMMMSMMM;
 dMSSMMSSSSSSSMMMMMMM;    ;.;   MMMMMMMSMMM
:MMMSSSSMMMSSP^TMMMMM     ;.;   MMMMMMMMMMM
MMMSMMMMSSSSP   `MMMM     ;.;   :MMMMMMMMM;
"TMMMMMMMMMM      TM;    :`.:    MMMMMMMMM;
   )MMMMMMM;     _/\\    :`.:    :MMMMMMMM
  d$SS$$$MMMb.  |._\\\   :`.:     MMMMMMMM
  T$$S$$$$$$$$$$m;O\\\\"-;`.:_.-  MMMMMMM;
 :$$$$$$$$$$$$$$$b_l./\\ ;`.:    mMMSSMMM;
 :$$$$$$$$$$$$$$$$$$$./\\;`.:  .$$MSMMMMMM
  $$$$$$$$$$$$$$$$$$$$. \\`.:.$$$$SMSSSMMM;
  $$$$$$$$$$$$$$$$$$$$$. \\.:$$$$$SSMMMMMMM
  :$$$$$$$$$$$$$$$$$$$$$.//.:$$$$SSSSSSSMM;
  :$$$$$$$$$$$$$$$$$$$$$$.`.:$$SSSSSSSMMMP
   $$$$$$$$$;"^$J "^$$$$;.`.$$P  `SSSMMMM
   :$$$$$$$$$       :$$$;.`.P'..   TMMM$$b
   :$$$$$$$$$;      $$$$;.`/ c^'   d$$$$$S;
   $$$$$S$$$$;      '^^^:_d$g:___.$$$$$$SSS
   $$$$SS$$$$;            $$$$$$$$$$$$$$SSS;
  :$$$SSSS$$$$            : $$$$$$$$$$$$$SSS
  :$P"TSSSS$$$            ; $$$$$$$$$$$$$SSS;
  j    `SSSSS$           :  :$$$$$$$$$$$$$SS$
 :       "^S^'           :   $$$$$$$$$$$$$S$;
 ;.____.-;"               "--^$$$$$$$$$$$$$P
 '-....-"                       ""^^T$$$$P")"
              << std::endl;
    //Sleep(5000);
    return 0;
}
