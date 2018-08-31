/*
  STRING REPLACEMENT MODULE
  Rev:  Submitted to InstallSite 2-26-1999

  by James Frater

  See documentation in _StrReplace.rul
*/

prototype   _Right ( BYREF STRING, STRING, LONG );
prototype   _Left  ( BYREF STRING, STRING, LONG );
prototype   _LTrim ( BYREF STRING );
prototype   _RTrim ( BYREF STRING );
prototype   _Trim  ( BYREF STRING );

prototype   _StrStripLeading ( BYREF STRING, STRING );
prototype   _StrStripTrailing ( BYREF STRING, STRING );

prototype   _StrFind ( STRING, STRING, LONG );

LONG        glOccurrences;
prototype   _StrReplace ( BYREF STRING, STRING, STRING, BYREF LONG, LONG );