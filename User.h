
  // X position Area
	if((X < (XO+radius)) && (X > (XO-radius)))
	{
		m_pMain->Yaz("Kullanici X pozisyonunda \r\n",0);
		type1=TRUE;
	}
	// Y Position Area 
	if((Y < (YO+radius)) && (Y > (YO-radius)))
	{
		m_pMain->Yaz("Kullanici Y pozisyonunda \r\n",0);
		type2=TRUE;
	}
	if(type1 && type2){
		return TRUE;
	}else{
	m_pMain->Yaz("Kullanici Menzil icinde degil\r\n",0);	
	return FALSE;
	}
