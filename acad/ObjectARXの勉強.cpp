�������g���[�j���O�K�C�h������
���O���t�B�J���I�u�W�F�N�g�̑I��
1.�P��I�u�W�F�N�g�̑I��
acedEntSel()���g�p���āAads_name�^�̃G���e�B�e�B�����擾

2.�����I�u�W�F�N�g�̑I��(�I���Z�b�g)
acedSSGet()���g�p���āAads_name�^�̃G���e�B�e�B�����擾
�g�p�����I���Z�b�g�̈��acedSSFree()�ŊJ�����K�{

�Eads_name�^�Ƃ�
C����Ŏg���Ă���ADS�J�X�^�}�C�Y������p��
ObjectARX�ł̓I�u�W�F�N�gID�����ʎq�Ƃ��ė��p�B
ads_name �� AcDbObjectId�I�u�W�F�N�g�ϊ����K�v�B
acdbGetObjectID() �O���[�o���֐����g�p

���I�u�W�F�N�g���쎞�̌���
	�@. �I�u�W�F�N�g ID �ŃI�u�W�F�N�g�����
	��
	�A. �I�u�W�F�N�g ID �ŃI�u�W�F�N�g�� �I�[�v�� �E �����ł͂��߂ăI�u�W�F�N�g���擾
	��
	�B. �I�u�W�F�N�g�� �A�N�V���� �E �����o�֐��ɃA�N�Z�X
	��
	�C. �I�u�W�F�N�g�� �N���[�Y �E �����ŃI�u�W�F�N�g�ւ̃A�N�V�������R�~�b�g�����

���I�u�W�F�N�g����̊�{
	��F�E�I�������I�u�W�F�N�g�̐F��ԂɕύX �c
	ads_name ename;
	ads_point pt;
	acedEntSel( _T("\n�I�u�W�F�N�g��I��:"), ename, pt );
	AcDbObjectId objId;
	acdbGetObjectId( objId, ename );   //  �@ �I�u�W�F�N�gID�ŃI�u�W�F�N�g�����
	AcDbEntity* pEnt;
	acdbOpenAcDbEntity( pEnt, objId, AcDb::kForWrite ); // �A �I�u�W�F�N�gID�ŃI�u�W�F�N�g���I�[�v��
	pEnt->setColorIndex( 1 ); // 1=��  // �B �I�u�W�F�N�g�փA�N�V����
	pEnt->close();                     // �C �I�u�W�F�N�g ���N���[�Y

���I�[�v�� ���[�h
�E�I�u�W�F�N�g�̃I�[�v���ɂ̓I�[�v�����[�h���K�v
 �E AcDb::kForWrite�F�������݃I�[�v��
 �E AcDb::kForRead�F�ǂݍ��݃I�[�v��
 �E AcDb::kForNotify�F�ʒm�I�[�v��
 �E �ǂݍ��݃��[�h�ŏ������ݑ��������ƃN���b�V�����܂� !!

�E�N���[�Y�ŏ������������ăA�N�V���������f����܂�
�E �A�N�V������ɂ̓N���[�Y���K�{ !! 

���I�u�W�F�N�g�̓�����@��2�ʂ�
1. �I�𑀍�ŃI�u�W�F�N�g����肷����@
 �E �K�p�\�Ȃ̂̓O���t�B�J�� �I�u�W�F�N�g�̂�
 �E ADS �O���[�o���֐��̗��p���K�{

2. �}�ʃf�[�^�x�[�X����̒ǐՂŃI�u�W�F�N�g����肷����@
 �E ���ʃe�[�u�� �I�u�W�F�N�g�ւ̃A�N�Z�X
 �E �I�u�W�F�N�g��`�i�N���X�j�̃����o�֐��𗘗p

����������̐}�ʍ\���i�}�ʃf�[�^�x�[�X�j
�E�I�u�W�F�N�g���K�w�I�ɐ�������Ă���
 �E �g�b�v �I�u�W�F�N�g�� �}�ʃf�[�^�x�[�X �I�u�W�F�N�g
 �E �I�[�i�V�b�v�ڑ� �ɂ���Ę_���I�� �Ȃ��� ��ێ�
 �E �I�u�W�F�N�g�͑R��ׂ� �R���e�i �I�u�W�F�N�g �Ɋi�[

����������̐}�ʍ\���ɐ�����ǉ�����ꍇ�� ...
1. �V���� AcDbLine �N���X�����ɃI�u�W�F�N�g���쐬����
2. ���f����Ԃ�\�� AcDbBlockTableRecord �ɘ_����̂Ȃ���
 �E �I�[�i�[�V�b�v�ڑ��̊m��
 �EAcDbBlockTableRecord �I�u�W�F�N�g���擾����K�v����

����������̃I�u�W�F�N�g�K�w�̒ǐ�
�EObjectARX �͐}�ʃf�[�^�x�[�X��ǐ�
 �E AcDbDatabase �I�u�W�F�N�g���肫
 �E ���ʃI�u�W�F�N�g�ւ� �I�u�W�F�N�gID �ƌĂ΂�鎯�ʎq����ăA�N�Z�X
 �E ���݂� �}�ʃf�[�^�x�[�X�iAcDbDatabase �I�u�W�F�N�g�j ���擾

���}�ʃf�[�^�x�[�X����̃I�u�W�F�N�g�ǐ�
 �EAcDbDatabase �̉��ʃe�[�u�� �I�u�W�F�N�g���I�[�v��
 �E�e�[�u�� �I�u�W�F�N�g���烌�R�[�h �I�u�W�F�N�g���I�[�v��

�����݂̐}�ʃf�[�^�x�[�X�̎擾
�EAcDbDatabase �N���X�Œ�`
 �E AutoCAD ��͕����̐}�ʂ��I�[�v���\
 �E ������ AcDbDatabase �C���X�^���X������
�E�J�����g�}�ʃf�[�^�x�[�X
 �E ���ݕҏW�ΏۂƂȂ��Ă���}�ʃf�[�^�x�[�X
 �E AcDbHostApplicationServices::workingDatabase() ���g���Ď擾
  �E AcDbDatabase �I�u�W�F�N�g��Ԃ�
 �E AcDbHostApplicationServices �I�u�W�F�N�g�̎擾
  �E acdbHostApplicationServices() �֐��Ŏ擾�\

����O���t�B�J�� �I�u�W�F�N�g�̒ǉ���
�E��w��ǉ�����ꍇ
AcDbDatabase* pDb=acdbHostApplicationServices()->workingDatabase();
AcDbLayerTable* pTbl;
pDb->getLayerTable( pTbl, AcDb::kForWrite ); // ��w�e�[�u�����I�[�v��
if ( !pTbl->has( szBuf ) ){ 
	AcDbLayerTableRecord* pLayer = new AcDbLayerTableRecord;
	pLayer->setName( szBuf );
	pTbl->add( pLayer ); // ��w�e�[�u���փA�N�V����
	pLayer->close(); // �V�K�I�u�W�F�N�g���I�[�i�[�V�b�v�ڑ��� �m�����ꂽ���_�ŃN���[�Y���K�v!
}
else
	acutPrintf( _T("\n��w %s �͊��ɓo�^����Ă��܂�..."), szBuf );
pTbl->close(); // ��w�e�[�u�����N���[�Y

���O���t�B�J���I�u�W�F�N�g�̒ǉ���
�E���f����Ԃɐ�����ǉ�
AcGePoint3d ptStart( 0.0, 0.0, 0.0 );            �� �I�u�W�F�N�g�̐V�K�쐬
AcGePoint3d ptEnd( 100.0, 100.0, 100.0 );        ��
AcDbLine* pLine = new AcDbLine( ptStart, ptEnd );��

AcDbDatabase* pDb=acdbHostApplicationServices()->workingDatabase(); ��  �I�u�W�F�N�g�̒ǉ�����
AcDbBlockTable* pTbl;                                               ��
pDb->getBlockTable( pTbl, AcDb::kForRead );                         ��// �u���b�N�e�[�u�����I�[�v��
AcDbBlockTableRecord* pRec;                                         ��
pTbl->getAt( _T("*MODEL_SPACE"), pRec, AcDb::kForWrite );           ��// �u���b�N �e�[�u���փA�N�V�����A���f����Ԃ��I�[�v��
pTbl->close();                                                      ��// �u���b�N�e�[�u�����N���[�Y
pRec->appendAcDbEntity( pLine );                                    ��// ���f����ԂɃA�N�V����
pRec->close();                                                      ��// ���f����Ԃ��N���[�Y
pLine->close();                                                     ��  ���V�K�I�u�W�F�N�g���I�[�i�[�V�b�v�ڑ��� 
                                                                          �m�����ꂽ���_�ŃN���[�Y���K�v�ł�

���R�[�h�̕⑫
�R�[�h�̕⑫ �| ����1
�E�_ ���I�u�W�F�N�g�Ƃ��Ĉ���
	�E AcGePoint3d �N���X�Œ�`
�E�I�u�W�F�N�g�̒ǉ��� 2 �̎菇�Ŏ��{
	1. �I�u�W�F�N�g�� new �ŐV�K�쐬������
	2. ���̌�A�I�[�i�[�V�b�v�ڑ��葱�����{
�EappendAcDbEntity()
	�E �O���t�B�J�� �I�u�W�F�N�g��ǉ�
	�E AcDbBlockTableRecord �ɃI�u�W�F�N�g���Ȃ��܂�
	�E ���̃��\�b�h�Ăяo���ŃI�[�i�[�V�b�v�ڑ����m��
�E�I�[�i�[�V�b�v�ڑ�
	�E �I�[�i�[�V�b�v�ڑ������I�u�W�F�N�g�݂̂� DWG �t�@�C���ۑ��Ώۂ�
	�E �I�[�i�[�V�b�v�ڑ��̂���I�u�W�F�N�g�̓N���[�Y�͕K�{ 
�EgetAt() �Ń��R�[�h �I�u�W�F�N�g�����
	�E ���ʂȃu���b�N�e�[�u�����R�[�h��
	�E "*MODEL_SPACE" �� ���f����� �E "*PAPER_SPACE" �� �y�[�p�[��� (���C�A�E�g1)
	�E "*PAPER_SPACE0" �� �y�[�p�[��� (���C�A�E�g2)
	�E �c�ȍ~�����̑���
�E�u���b�N�e�[�u�����R�[�h�̓u���b�N��`�������܂�
	�E ��L�ȊO�͒ʏ�̃u���b�N��`
	�E ���[�U�쐬���̔C�Ӗ��Ŏ擾�\

�����[�U�Ƃ̑Θb
�EADS ������̃O���[�o���֐����g�p
	acedGetPoint()   ���W�����/�w��������
	acedGetReal()    ��������͂�����
	acedGetString()  ���������͂�����
	acedGetInt()     ��������͂�����
	acedGetAngle()   �V�X�e���ϐ� ANGBASE ����ɂ��Ċp�x�����/�w��������
	acedGetCorner()  �{�b�N�X ���o�[�o���h�ō��W�����/�w��������
	acedGetDist()    ���������/2�_�w��������
	acedGetKword()   �L�[���[�h����͂�����
	acedGetOrient()  �V�X�e���ϐ� ANGBASE �𖳎����Ċp�x�����/�w��������
	acedInitGet()    �L�[���[�h�̐ݒ�Ɠ��͊֐��̏�Ԃ𐧌䂷��

���O���t�B�J���I�u�W�F�N�g�̒ǉ���
�E���f����Ԃɐ�����ǉ�
	ads_point pt1;
	acedInitGet( RSG_NONULL, NULL );
	int stat = acedGetPoint( NULL, _T("\n�n�_���w��:"), pt1 );
	if ( stat != RTNORM ) return;

	ads_point pt2;
	acedInitGet( RSG_NONULL, NULL );
	stat = acedGetPoint( pt1, _T("\n�I�_���w��:"), pt2 );
	if ( stat != RTNORM ) return;
	
	AcGePoint3d ptStart( pt1[X], pt1[Y], pt1[Z] );
	AcGePoint3d ptEnd( pt2[X], pt2[Y], pt2[Z] );
	AcDbLine* pLine = new AcDbLine( ptStart, ptEnd );

	AcDbDatabase* pDb=acdbHostApplicationServices()->workingDatabase();
	AcDbBlockTable* pTbl;
	pDb->getBlockTable( pTbl, AcDb::kForRead );
	AcDbBlockTableRecord* pRec;
	pTbl->getAt( _T("*MODEL_SPACE"), pRec, AcDb::kForWrite );
	pTbl->close();
	pRec->appendAcDbEntity( pLine );
	pRec->close();
	pLine->close();

���G���[�����ɂ���
�E��O�����itry~catch~throw�j�͗��p���܂���
	�E �֐��߂�l�ł̏���
�E2 ��ނ̊֐��߂�l�̑���
	�E ADS ������p�������O���[�o���֐�
		�E �߂�l�Fint �^
		�E adscodes.h �ł� RTNORM�ARTERROR�ARTCAN�A�c
�E ObjectARX �l�C�e�B�u
	�E �����o�֐��A�O���[�o���֐�
	�E acadstrc.h �ł̖߂�l�FAcad::ErrorStatus �񋓌^

����L4�F�I�u�W�F�N�g�̑I��
���P��I�u�W�F�N�g�̑I���
�Eads_name ���� AcDbObjectId �ւ̕ϊ�����
	ads_name ename;
	ads_point pt;
	int stat = acedEntSel( _T("\n�I�u�W�F�N�g��I��:"), ename, pt );
	if ( stat != RTNORM ) return;
	AcDbObjectId objId;
	acdbGetObjectId( objId, ename );
	acutPrintf( _T("\n�I�������I�u�W�F�N�g�̃I�u�W�F�N�gID ��%x"), objId );

�������I�u�W�F�N�g�̑I���
�Eads_name ���� AcDbObjectId �ւ̕ϊ�����
	ads_name sset;
	int stat = acedSSGet( NULL, NULL, NULL, NULL, sset );
	if ( stat != RTNORM ) return;

	long nTotal;
	acedSSLength( sset, &nTotal );

	ads_name ename;
	AcDbObjectId objId;
	AcDbObjectIdArray objIdary;
	for( long nIndex=0; nIndex<nTotal; 	nIndex++) {
		acedSSName( sset, nIndex, ename );
	acdbGetObjectId( objId, ename ); // �I���Z�b�g�v�f�̎��o�� (ads_name �^��)
	objIdary.append( objId );
	}
	acedSSFree( sset ); // �I���Z�b�g�̈�̉��

	for( long nIndex=0 ; nIndex<objIdary.length(); 	nIndex++ ) {
		acutPrintf( _T("\n�I�������I�u�W�F�N�g��ObjID �� %x"), objIdary.at(nIndex) );
	} 

�������^�C�� �^�C�v���ʎq
�E�����^�C�� �^�C�v���ʎq
	�E ObjectARX �̃��[�g�N���X�ł��� AcRxObject �Ɏ���
	�E ���s���ɃN���X���ɃN���X���g�ƌp���֌W������
�E��v�ȃ����o�֐�
	AcRxObject::desc() �I�u�W�F�N�g�̃N���X���������Ă���ꍇ�Ƀ����^�C�� �N���X���ʎq��Ԃ��B
	AcRxObject::isA() �ǂ̃N���X�����ɂ����I�u�W�F�N�g���s���̏ꍇ�Ƀ����^�C�� �N���X���ʎq��Ԃ��B
	AcRxObject::isKinfOf() �I�u�W�F�N�g������̃N���X�A�܂��́A�h���N���X�ɑ����Ă��邩�n���𒲂ׂ�B
	AcRxObject::cast() �I�u�W�F�N�g�������^�C���N���X���ʎq�Ɋ�Â��ēK�؂̃_�C�i�~�b�N�L���X�g����B �h���֌W�ɂȂ����ߕϊ��ł��Ȃ��ꍇ�ɂ� NULL ��Ԃ�

�������^�C�� �^�C�v���ʎq�̗��p��
�E�I���I�u�W�F�N�g���~�Ȃ� �c
	ads_name ename;
	ads_point pt;
	int stat = acedEntSel( _T("\n�I�u�W�F�N�g��I��:"), ename, pt );
	if ( stat != RTNORM ) return;

	AcDbObjectId objId;
	acdbGetObjectId( objId, ename );
	AcDbEntity* pEnt;
	acdbOpenAcDbEntity( pEnt, objId, AcDb::kForRead );
	if ( pEnt->isA() == AcDbCircle::desc()) {
		double radius = AcDbCircle::cast( pEnt )->radius();
		acutPrintf( _T("\n�~�̔��a�� %lf"), radius );
	}
	pEnt->close();
	// �q�b�g�����G���e�B�e�B�̎��ʎq �wpEnt->isA()�x (�Ȃ񂩂̎��ʎq)���A�~���ʎq �wAcDbCircle::desc�x �Ȃ�A
	// �~���ʎq�ɃL���X�g�wAcDbCircle::cast�x���āA���̔��a�v���p�e�B�����o���Ă���B

����L5�C�e���^����
���C�e���^ �I�u�W�F�N�g
�E�R���e�i �I�u�W�F�N�g�̗v�f�𑖍�
 �E �v�f�I�u�W�F�N�g��񋓂���@�\ 
 �E �񋓂����I�u�W�F�N�g���I�[�v������@�\ 
 �E Visual Basic �� For Each �` Next �̂悤�Ȗ���
�E�R���e�i �I�u�W�F�N�g���ɐ�p�̃C�e���^ �N���X 
 �E 9 �̃V���{�� �e�[�u�� 
 �E �O���t�B�J�� �I�u�W�F�N�g�������R�[�h 
 �E �u���b�N��`�A���f����ԁA�y�[�p�[���
  �E AcDbBlockTableRecord

���e�[�u�� �I�u�W�F�N�g�̃C�e���^
�E�R���e�i �I�u�W�F�N�g���ɐ�p�̃C�e���^ �N���X
	AcDbBlockTableIterator       ���f����Ԃ�y�[�p�[��Ԃ��܂ށA�o�^���ꂽ�u���b�N��`�𑖍����邽�߂�
	                             �u���b�N �e�[�u�� �C�e���^
	AcDbDimStyleTableIterator    �o�^���ꂽ���@�X�^�C���𑖍����邽�߂̐��@�X�^�C�� �e�[�u�� �C�e���^
	AcDbLayerTableIterator       �o�^���ꂽ��w�𑖍����邽�߂̉�w �e�[�u�� �C�e���^
	AcDbLinetypeTableIterator    �o�^���ꂽ����𑖍����邽�߂̐��� �e�[�u�� �C�e���^
	AcDbRegAppTableIterator      �o�^���ꂽ�g���G���e�B�e�B�p�̃A�v���P�[�V�������𑖍����邽�߂�
	                             �A�v���P�[�V������ �e�[�u�� �C�e���^
	AcDbTextStyleTableIterator   �o�^���ꂽ�����X�^�C���𑖍����邽�߂̕����X�^�C�� �e�[�u�� �C�e���^
	AcDbUCSTableIterator         �o�^���ꂽ���[�U���W�n�𑖍����邽�߂̃��[�U���W�n �e�[�u�� �C�e���^
	AcDbViewportTableIterator    �o�^���ꂽ�r���[�|�[�g�𑖍����邽�߂̃r���[�|�[�g �e�[�u�� �C�e���^
	AcDbViewTableIterator        �o�^���ꂽ�r���[�𑖍����邽�߂̃r���[ �e�[�u�� �C�e���^
	AcDbDictionaryIterator       �o�^���ꂽ�f�B�N�V���i���𑖍����邽�߂̃f�B�N�V���i�� �C�e���^
	AcDbBlockTableRecordIterator �u���b�N��`�⃂�f����ԁA�y�[�p�[��ԓ��̃O���t�B�J�� �I�u�W�F�N�g�� �������邽�߂̃u���b�N �e�[�u�� �C�e���^ AcDbDictionaryIterator �f�B�N�V���i���v�f�𑖍����邽�߂̃f�B�N�V���i�� �C�e���^

�E���p���@
	1. newIterator() �ō\�z���ăC�e���^ �I�u�W�F�N�g�̃|�C���^���擾
	2. for( �|�C���^->start() ; �|�C���^->done() ; �|�C���^->step() ){ �ő���
	3. �K�v�ɉ����� �|�C���^->getRecord()�AgetEntity() �ŃI�[�v��
	4. delete �ŃC�e���^ �I�u�W�F�N�g���폜
�E�C�e���^�͐}�ʂɂ͕ۑ�����܂���
	�E �N���[�Y�̕K�v�Ȃ�
	�E �g�p��� delete ���Z�q�ł̍폜���K�v

���C�e���^�̗��p��
�E�S��w���̎擾
AcDbDatabase* pDb = acdbHostApplicationServices()->workingDatabase();
AcDbLayerTable* pTbl;
pDb->getLayerTable( pTbl, AcDb::kForRead );

AcDbLayerTableIterator* pItr;
pTbl->newIterator( pItr );
pTbl->close();

TCHAR* pszName;
AcDbLayerTableRecord* pRec;
for( pItr->start(); !pItr->done(); pItr->step()) {
	pItr->getRecord( pRec, AcDb::kForRead );
	pRec->getName( pszName );
	acutPrintf( _T("\n�擾������w�̖��O��[%s]�ł�..."), pszName );
	pRec->close();
	free( pszName );
}
delete pItr;

����L6 MFC�_�C�A���O
��AutoCAD �̃��[�U �C���^�t�F�[�X
�E2 �̎����`�� 
	�E .NET Framework �ɂ����� 
		�E .NET Framework �N���X ���C�u�����𗘗p 
	�E MFC �ɂ����� 
		�E MFC �_�C�i�~�b�N �����N ���C�u�������Q�� 
�E�������� AutoCAD �ŗL�N���X�����J 
	�E AdUixxx �N���X 
		�E AutoCAD �ŗL�ł͂Ȃ��ꕔ MFC �g���N���X�Q 
	�E AcUixxx �N���X 
		�E AdUixxx �N���X�����ɂ��� AutoCAD �ŗL�ȃN���X�Q
��AutoCAD �ŗL�� MFC �N���X
�E��j
	CAcUiLineWeightComboBox �N���X // �������h�����{�b�N�X
	CAcUiColorComboBox �N���X // �J���[�h�����{�b�N�X
	CAdUiPaletteSet �N���X ��// �}�[�J�[�ݒ�T�u�E�C���h�E
	CAdUiPalette �N���X    ��

��MFC �����Ɋւ�����
�EObjectARX ����`�� MFC �_�C�A���O 
	�E ���\�[�X ID �ɂ�郊�\�[�X�Ǘ� 
	�E �_�C�A���O�A�A�C�R���A�C���[�W�c
�E���\�[�X��������������\������ ! 
	1. �A�N�e�B�u ���\�[�X�� AutoCAD ���� ObjectARX �֐؂�ւ�
	2. ObjectARX ����`�̃��\�[�X���g�p
	3. �A�N�e�B�u ���\�[�X�� ObjectARX ���� AutoCAD �֖߂�
�ECAcModuleResourceOverride �C���X�^���X�ŉ������
��L6�̉��K��CDialog�h���N���X���g����MFCDLG���g���Ă���B


   ���N���X���C�u����
	AcRx  �A�v���P�[�V�����̃o�C���h�ƁA���C���^�C�� �N���X�o�^����у����^�C�� �N���X���ʂɎg���N���X
	AcEd  �l�C�e�B�u AutoCAD �R�}���h�̓o�^�� AutoCAD �C�x���g�ʒm�̂��߂̃N���X
	AcDb  AutoCAD �f�[�^�x�[�X �N���X
	AcGi  AutoCAD �G���e�B�e�B�������_�����O���邽�߂̃O���t�B�b�N�X �N���X
	AcGe  ��ʓI�Ȑ��`�㐔�I�u�W�F�N�g��W�I���g�� �I�u�W�F�N�g�p�̃��[�e�B���e�B �N���X

�����[�h���X �_�C�A���O����̐}�ʃf�[�^�x�[�X �A�N�Z�X
ads_point pt1;
acedInitGet( RSG_NONULL, NULL );
int stat = acedGetPoint( NULL, _T("\n�n�_���w��:"), pt1 );
if ( stat != RTNORM ) return;

ads_point pt2;
acedInitGet( RSG_NONULL, NULL );
stat = acedGetPoint( pt1, _T("\n�I�_���w��:"), pt2 );
if ( stat != RTNORM ) return;

acDocManager->lockDocument( acDocManager->curDocument(), AcAp::kWrite ); // �h�L�������g�����b�N !!

AcGePoint3d ptStart( pt1[X], pt1[Y], pt1[Z] );
AcGePoint3d ptEnd( pt2[X], pt2[Y], pt2[Z] );
AcDbLine* pLine = new AcDbLine( ptStart, ptEnd );

AcDbDatabase* pDb=acdbHostApplicationServices()->workingDatabase();
AcDbBlockTable* pTbl;
pDb->getBlockTable( pTbl, AcDb::kForRead );
AcDbBlockTableRecord* pRec;
pTbl->getAt( _T("*MODEL_SPACE"), pRec, AcDb::kForWrite );
pTbl->close();
pRec->appendAcDbEntity( pLine );
pRec->close();
pLine->close();

acDocManager->unlockDocument( acDocManager->curDocument() );

���h�L�������g�� ���b�N ���Ώې}�ʂ���肵�܂�
�i�h�L�������g=�}�ʃE�B���h�E�� AcApDocument �N���X�ŕ\���j

����L7���A�N�^
��AutoCAD �C�x���g���Ď�
�E .NET Framework �̃f���Q�[�g�𗘗p
�E AutoCAD��Ŕ�������C�x���g�̗� 
	�E �R�}���h�̎��s 
	�E �h�L�������g�̃N���[�Y 
	�E �}�ʃf�[�^�x�[�X�ւ̃I�u�W�F�N�g�̒ǉ� �c�Ȃ�
�E AutoCAD��Ŕ�������C�x���g�̊Ď� 
	�E �R�}���h�̊Ď�         �F�G�f�B�^ ���A�N�^ 
	�E �h�L�������g�̊Ď�     �F�h�L�������g ���A�N�^ 
	�E �}�ʃf�[�^�x�[�X�̊Ď� �F�f�[�^�x�[�X ���A�N�^

�����A�N�^�̎�ނƒ�`�N���X
�E�ꎞ���A�N�^ 
	�E �}�ʂɕۑ�����Ȃ� 
	�E �Z�b�V�����Ԃ̂ݗL�� 
	�E ���p���ɂ̓Z�b�V�������ɓo�^���K�v 
	�E �ꎞ���A�N�^ �N���X����̃N���X�h�����K�v
�E�s�σ��A�N�^ 
	�E �}�ʂɕۑ������ 
	�E �Z�b�V�����ԂŃ��A�N�^���ێ������ 
	�E �J�X�^�� �N���X�̒�`���K�v
���ꎞ���A�N�^
	AcDbObjectReactor ����� 
	AcDbObject �h���I�u�W�F�N�g���Ď����� 
	AcDbEntityReactor ����� 
	AcDbEntity �h���I�u�W�F�N�g���Ď����� 
	AcDbDatabaseReactor �}�ʃf�[�^�x�[�X��S�̊Ď�����
	AcEditorReactor �R�}���h���Ď�����
	AcRxDLinkerReactor ObjectARX �A�v���P�[�V�����̃��[�h/���[�h�������Ď�����
	AcApDocManagerReactor �h�L�������g���Ď����� 
	AcDbLayoutManagerReactor ���C�A�E�g���Ď����� 
	AcDbSummaryInfoReactor �}�ʂ̃v���p�e�B���Ď�����
	AcApProfileManagerReactor �v���t�@�C�����Ď�����
	AcEdInputContextReactor ���͊֐��Ȃǂ��Ď�����
���s�σ��A�N�^
	AcDbObject �ȉ��̔h���N���X�� �}�ʃt�@�C���ւ̕ۑ��@�\�� �p�� !!
	    ��AcDbObject �h���N���X ����� AcDbObject �h���I�u�W�F�N�g���Ď�����

�����A�N�^�̓��상�J�j�Y��
	�E�G�f�B�^ ���A�N�^�ŃR�}���h���Ď�����ꍇ
	�V�i���I �G�f�B�^����
		"LINE" [Enter]���������I
			�� AcEditorReactor::commandWillStart() �� // ��������̃G�f�B�^ ���A�N�^ �I�u�W�F�N�g
		"���̓_���w��"�� [Enter]���������I         ��
			�� AcEditorReactor::commandCancelled() ��
		"���̓_���w��"�� [ESC]���������I           ��
			�� AcEditorReactor::commandEnded()     ��

���ꎞ���A�N�^�̎���
1. �V�������A�N�^�N���X���쐬
	�E �ړI�Ƃ��郊�A�N�^�N���X����h��
2. �K�v�Ƃ���C�x���g��I��
	�E �C�x���g�ɑΉ����郁���o�֐����I�[�o�[���C�h
3. ���A�N�^�I�u�W�F�N�g�̍쐬
	�E new ���Z�q
4. ���A�N�^�̓o�^
	�E addReactor()
5. ���A�N�^�Ď�
6. ���A�N�^�̓o�^����
	�E removeReactor()
7. ���A�N�^ �I�u�W�F�N�g�̍폜
	�E delete ���Z�q 

���G�f�B�^ ���A�N�^�̎���
�E�G�f�B�^ ���A�N�^�̒ǉ� 
	�E AcEditor::addReactor() 
�E�G�f�B�^ ���A�N�^�̍폜 
	�E AcEditor::removeReactor() 
�EacedEditor �}�N�� 
	�E AcEditor ���I�u�W�F�N�g �|�C���^��Ԃ� 
	�E ���ۂ̃��A�N�^�o�^�A�폜���ɗ��p

���f�[�^�x�[�X ���A�N�^
�EAcDbDatabaseReactor �N���X
	�E�}�ʃf�[�^�x�[�X��̓�����Ď�
		AcDbDatabaseReactor::headerSysVarChanged() �}�ʂɕۑ������V�X�e���ϐ��̕ύX��ɒʒm����� 
		AcDbDatabaseReactor::headerSysVarWillChange() �}�ʂɕۑ������V�X�e���ϐ��̕ύX�O�ɒʒm����� 
		AcDbDatabaseReactor::objectAppended() �I�u�W�F�N�g���ǉ����ꂽ��ɒʒm����� 
		AcDbDatabaseReactor::objectErased() �I�u�W�F�N�g���폜���ꂽ��ɒʒm����� 
		AcDbDatabaseReactor::objectModified() �I�u�W�F�N�g���C�����ꂽ��ɒʒm����� 
		AcDbDatabaseReactor::objectOpenedForModify() �I�u�W�F�N�g���C���̂��߂ɃI�[�v�����ꂽ��ɒʒm����� 
		AcDbDatabaseReactor::objectReappended() �폜��̃I�u�W�F�N�g���Ēǉ����ꂽ��ɒʒm����� �iUndo ��� Redo�j 
		AcDbDatabaseReactor::objectUnappended() �ǉ���̃I�u�W�F�N�g���폜���ꂽ��ɒʒm����� �iUndo�j

���f�[�^�x�[�X ���A�N�^
�E�f�[�^�x�[�X ���A�N�^�̒ǉ� 
	�E AcDbDatabase::addReactor() 
�E�f�[�^�x�[�X ���A�N�^�̍폜 
	�E AcDbDatabase::removeReactor() 
�EAcDbDatabase �I�u�W�F�N�g �|�C���^�� ? 
	�E ���ۂ̃��A�N�^�o�^�A�폜���ɗ��p 
	�E SDI ������ MDI �����̍��ق��l�� 
	�E �G�f�B�^ ���A�N�^�� AutoCAD �ɂ��ɂP�̂� 
	�E �}�ʃf�[�^�x�[�X�͕������݂���\������

���h�L�������g���f�[�^

�E�K�؂Ȑ}�ʃf�[�^�x�[�X �I�u�W�F�N�g�̎擾 
�ESDI ���F 
	�E �J�����g�}�ʃf�[�^�x�[�X�l����OK 
	�E acdbHostApplicationServices()->workingDatabase() 
�EMDI���F 
	�E AutoCAD ��̕\���}�ʂɑΉ�����K�v 
	�E �h�L�������g ���A�N�^�𕹗p���ăh�L�������g�؂�ւ����Ď� 
		�E AcApDocManagerReactor 
	�E �e�h�L�������g�̃|�C���^��ێ� 
		�E AcApDocument 
		�E AcApDocument::database()

���h�L�������g���f�[�^�̎���
�E�W���I�ȃA�v���[�`
	�E�O���[�o�� �|�C���^�Ń��X�g �`�F�C�����\�z
	�E�h�L�������g �I�u�W�F�N�g �|�C���^��ێ�



�Ǘ��N���X                                �f�[�^�N���X                         �f�[�^�N���X                    
   +---------------------------------+   +-------------------------------+    +-------------------------------+
-->+�ŏ��̃f�[�^�N���X �ւ̃|�C���^  |-->+���̃f�[�^�N���X�ւ̃|�C���^   |--->+���̃f�[�^�N���X�ւ̃|�C���^   |
   +---------------------------------+   +-------------------------------+    +-------------------------------+
   |�h�L�������g���A�N�^�̃|�C���^   |   |�Ή�����h�L�������g�̃|�C���^ |    |�Ή�����h�L�������g�̃|�C���^ |
   +---------------------------------+   |AcApDocument*                  |    |AcApDocument*                  |
   |�J�����g�h�L�������g�̃f�[�^�N�� |   +-------------------------------+    +-------------------------------+
   |�X�|�C���^�i�h�L�������g���A�N�^ |   |���ۂ̃f�[�^�i�����j         |    |���ۂ̃f�[�^�i�����j         |
   |�ʒm�ōX�V����j                 |   |�ʒm�ōX�V����j               |    |�ʒm�ōX�V����j               |
   +---------------------------------+   +-------------------------------+    +-------------------------------+
                ��
                ��
                ��
	+---------------------------------+
	|�w�h�L�������g���A�N�^�x         |
	|�h�L�������g�̕\���؂�ւ���ʒm |
	|�i�A�N�e�B�u�ɂȂ����h�L�������g |
	|�̃|�C���^�j                     |
	+---------------------------------+

�����h�L�������g���f�[�^�̎���
�EObjectARX Wizard �ł̎��� 
	�E AcApDataManager �N���X 
		�E �h�L�������g ���A�N�^ 
		�E template �N���X 
		�E AcApDMgr.h 
	�E CDocData �N���X 
		�E �h�L�������g���̃f�[�^�i�[�p�Ǘ��N���X 
		�E AcApDataManager<CDocData> DocVars; 
		�E DocData.h�ADocData.cpp 
	�E ���ۂ̃h�L�������g���f�[�^�擾 �� 
		�E DocVars.docData().<���A�N�^�I�u�W�F�N�g�|�C���^> 
		�E <���A�N�^ �I�u�W�F�N�g �|�C���^> �� �h�L�������g���f�[�^

����L8�J�X�^���I�u�W�F�N�g
���J�X�^���I�u�W�F�N�g
�E�Ǝ��I�u�W�F�N�g�̍쐬�@�\                   AcDbObject
�E�O���t�B�J�� �I�u�W�F�N�g                     |  
	�E AcDbEntity �ȉ�����h��                  +--MyObjectClass //�J�X�^���I�u�W�F�N�g (��O���t�B�J���I�u�W�F�N�g)
	�E �`������܂ރG���e�B�e�B�̎���         |  
�E��O���t�B�J�� �I�u�W�F�N�g                   +---cDbEntity
	�E AcDbObject �ȉ�����h��                       | 
	�E ��`����݂̂̃I�u�W�F�N�g�̎���            +-MyEntityClass //�J�X�^���I�u�W�F�N�g (�O���t�B�J���I�u�W�F�N�g)
	�E �J�X�^�� �f�B�N�V���i���̍쐬�͉\           |
	�E �V���{�� �e�[�u���̍쐬�͋֎~

�E�Ǝ��I�u�W�F�N�g�쐬���̃R���e�i �I�u�W�F�N�g�� ?
�E�O���t�B�J�� �I�u�W�F�N�g 
	�E ���f����ԁA�y�[�p�[��ԁA�u���b�N��` 
	�E AcDbBlockTableRecord
�E��O���t�B�J�� �I�u�W�F�N�g 
	�E �J�X�^�� �f�B�N�V���i�� 
	�E AcDbDictionary
�E�������̃����o�֐��I�[�o�[���C�h���K�v 
	�E�e�����o�֐��͋@�\���� AutoCAD �Ăяo����� 

	AutoCAD �̓I�u�W�F�N�g�̐U�镑���� �J�X�^���I�u�W�F�N�g�̒�` .arx �ɏƉ�


���v���L�V�I�u�W�F�N�g
�E�J�X�^�� �I�u�W�F�N�g�̒�` .arx �����[�h�������ꂽ��Ԃł�����
	�EAutoCAD ���I�u�W�F�N�g�̐U�������Ɖ�ł��Ȃ�

	�J�X�^���I�u�W�F�N�g�̒�` .arx �� ���[�h��������ĐU�镑�����Ɖ�ł��Ȃ�

���v���L�V �I�u�W�F�N�g �̖h�~

�E�v���L�V �I�u�W�F�N�g�h�~�̕��� 
	�E AutoCAD ���烍�[�h�����ł��Ȃ� .arx �t�@�C���� �J�X�^�� �I�u�W�F�N�g���` 
	�E acrxDynamicLinker->unlockApplication() 
	�E acrxDynamicLinker->lockApplication() 
�EDB/UI�����ł̎����i�����j 
	�E DB �������W���[�� 
		�E �J�X�^�� �I�u�W�F�N�g�̒�`�����݂̂����� 
		�E �g���q�� .dbx �ɕύX 
	�E UI �������W���[�� 
		�E �J�X�^�� �I�u�W�F�N�g���R���e�i�ւ̒ǉ�����������R�}���h������ 
		�E �g���q�� .arx �̂܂� 
�EDB/UI �����̈Ӗ�
	�E UI �����F�J�X�^�� �I�u�W�F�N�g�쐬�A�ҏW�R�}���h 
		�E UI���Ȃ���΃J�X�^�� �I�u�W�F�N�g�ւ̓A�N�Z�X�s�� 
		�E �̔� �x�[�X 
	�E DB �����F�J�X�^�� �I�u�W�F�N�g�̒�` 
		�E ��`���݂̂ŃR�}���h�͓���� 
		�E DWG �ւ� Read/Write���\ 
		�E �����_�E�����[�h �x�[�X 
	�E AutoCAD ��ł̔F���@�\��}�ʂƈꏏ�ɗ��ʂ����� 
	�E .dbx �݂̂���Ηǂ��Ƃ����l���� 
	�E .dbx ���� Object Enabler�i�I�u�W�F�N�g �C�l�[�u���j�ƌ�

	�����S�ȃI�u�W�F�N�g�̎����͑����̘J�͂��K�v�ł� !

�������J�����K���p��
����L9�O���}�ʃA�N�Z�X
���O���}�ʃA�N�Z�X
�EAutoCAD �G�f�B�^�}�� 
	�E AutoCAD �G�f�B�^��ɕ\������Đ}�ʃf�[�^�x�[�X�� 
	�E AutoCAD �ɂ���Đ}�ʃI�[�v������ă������W�J 
	�E acdbHostApplicationServices()->workingDatabase()

�E�O���}�� 
	�E AutoCAD �G�f�B�^�ɕ\�������ɐ}�ʃf�[�^�x�[�X�� 
	�E ObjectARX �ɂ�蓮�I�Ƀ�������ɓW�J���\ 
	�E �V�K�� AcDbDatabase �N���X �I�u�W�F�N�g���쐬 
	�E �S���̐V�K��ԂƊ����}�ʂ̓ǂݍ��݂̕ҏW���\

���O���}�ʃf�[�^�x�[�X�̍\�z

�E�}�ʃf�[�^�x�[�X�ɍŒ���K�{�ȃI�u�W�F�N�g 
	�E �V���{���e�[�u�� 
		�E �u���b�N�e�[�u���A��w�A����A���@�X�^�C���A�����X�^�C�� �c 
	�E �n�[�h�I�[�i�[�V�b�v�����I�u�W�F�N�g 
		�E ���f����ԁA�y�[�p�[��ԁA0 ��w�ASTANDARD �����X�^�C���c 
�EAcDbDatabase �I�u�W�F�N�g�̐V�K�쐬���̒��� 
	�E new AcDbDatabase �ɂĐ}�ʃf�[�^�x�[�X�p�Ɏg�p 
	�E �V�K�Ƀ[������\�z����ꍇ 
		�E new AcDbDatabase( true ) �F�V���{���e�[�u�����̐}�ʍ\���͑��� 
	�E ��Ɋ����}�ʃt�@�C����ǂݍ��ޏꍇ 
		�E new AcDbDatabase( false ) �F�V���{���e�[�u�����̐}�ʍ\�����Ȃ���� 
		�E �ǂݍ��ސ}�ʃt�@�C�����\����ێ����Ă��邽�ߍ\�z�͕s�v 

�E�V�K�Ƀ[������\�z����ꍇ 
	�E ��{�\�������݂��Ȃ���΃I�u�W�F�N�g�̒ǉ��͂ł��Ȃ�
�E��Ɋ����}�ʃt�@�C����ǂݍ��ޏꍇ 
	�E �}�ʃt�@�C������{�\�������̂ŃR���t���N�g���Ă��܂�

���}�ʃt�@�C���̓Ǎ��݂ƕۑ�

�E�}�ʃt�@�C���̐}�ʃf�[�^�x�[�X�� 
	�E AcDbDatabase::readDwgFile() 
	�E �}�ʃf�[�^�x�[�X����̏��� 
		�E �I�u�W�F�N�g����̓J�����g�}�ʃf�[�^�x�[�X�ҏW���ƑΏۂƓ��l 
		�E AcDbDatabase* �o�R�œK�؂ȃI�u�W�F�N�g�փA�N�Z�X 
		�E ��ʂɕ\������Ȃ��̂ŃG���e�B�e�B�I���͕s�� 
�E�}�ʃf�[�^�x�[�X�̐}�ʃt�@�C���� 
	�E AcDbDatabase::saveAs() 
�E�����I����� delete �Ń���������폜 
	�E ObjectARX �A�v�����\�z�����}�ʃf�[�^�x�[�X�͕K�{ 
	�E AutoCAD ��̐}�ʂ� AutoCAD ���폜��S�� 

���O���}�ʑ��� �R�[�h��
	AcDbDatabase* pDb = new AcDbDatabase( false );
	pDb->readDwgFile( _T("C:\\TEST.dwg�g) );
	AcDbBlockTable* pTbl;
	pDb->getBlockTable( pTbl, AcDb::kForRead );
		:
		:
	pTbl->close();
	pDb->saveAs( _T("C:\\TEST.dwg�g) );
	delete pDb;

����L10�O���}�ʂւ̐}�`�����o��
������I�u�W�F�N�g�̐}�`�����o��
�E�J�����g�}�ʓ�����̓���I�u�W�F�N�g�̏����o�� 
	�E WBLOCK �R�}���h�����̏������\ 
	�E AcDbDatabase::wblock() 
	�E 3 �̃I�[�o�[���[�h�֐����� 
		�E wblock(AcDbDatabase*&) 
		�E wblock(AcDbDatabase*&, AcDbObjectId) 
		�E wblock(AcDbDatabase*&, const AcDbObjectIdArray&, const AcGePoint3d&) 
		�E wblock (AcDbDatabase*, const AcDbObjectIdArray&, const AcGePoint3d&, AcDb::DuplicateRecordCloning) 
�E AcDbDatabase �̈�� wblock() �ŐV�K�\�z����� 
	�E new AcDbDatabase �ł̍쐬�͕s�v

	wblock() �͐V�K�ɐ}�ʃf�[�^�x�[�X���\�z����̂ŁA
	wblock������̃f�[�^�x�[�X�ɑ΂��AAcDbDatabase::insert()�̗��p���Đ}�ʂɔ��f������B

���I�u�W�F�N�g ID �z��

�EAcDbObjectIdArray �N���X 
	�E �I�u�W�F�N�g ID �̔z��I�u�W�F�N�g 
	�E �z��ւ̃I�u�W�F�N�gID �̒ǉ� 
		�E AcDbObjectIdArray::append() 
	�E �v�f���̊m�F 
		�E AcDbObjectIdArray::length() 
	�E AcArray �N���X�̃e���v���[�g���g�p
�EAcArray �N���X 
	�E <template> �ėp�z��N���X


�������������t�@�C��������
// �������쐬���āA��������f����ԃu���b�N �e�[�u�� ���R�[�h�ɒǉ����܂��B
AcDbObjectId createLine() {
    AcGePoint3d startPt(4.0, 2.0, 0.0);
    AcGePoint3d endPt(10.0, 7.0, 0.0);
    AcDbLine *pLine = new AcDbLine(startPt, endPt);

    AcDbBlockTable *pBlockTable;
    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pBlockTable, AcDb::kForRead);
    AcDbBlockTableRecord *pBlockTableRecord;
    pBlockTable->getAt(ACDB_MODEL_SPACE, pBlockTableRecord, AcDb::kForWrite);
    pBlockTable->close();
    AcDbObjectId lineId;
    pBlockTableRecord->appendAcDbEntity(lineId, pLine);
    pBlockTableRecord->close();
    pLine->close();
    return lineId;
}
// �~���쐬���āA��������f����ԃu���b�N �e�[�u�� ���R�[�h�ɒǉ����܂��B
AcDbObjectId createCircle() {
    AcGePoint3d center(9.0, 3.0, 0.0);
    AcGeVector3d normal(0.0, 0.0, 1.0);
    AcDbCircle *pCirc = new AcDbCircle(center, normal, 2.0);

    AcDbBlockTable *pBlockTable;
    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pBlockTable, AcDb::kForRead);
    AcDbBlockTableRecord *pBlockTableRecord;
    pBlockTable->getAt(ACDB_MODEL_SPACE, pBlockTableRecord, AcDb::kForWrite);
    pBlockTable->close();
    AcDbObjectId circleId;
    pBlockTableRecord->appendAcDbEntity(circleId, pCirc);
    pBlockTableRecord->close();
    pCirc->close();
    return circleId;
}
// ��w���쐬
void createNewLayer() {
    AcDbLayerTable *pLayerTable;
    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pLayerTable, AcDb::kForWrite);
    AcDbLayerTableRecord *pLayerTableRecord = new AcDbLayerTableRecord;
    pLayerTableRecord->setName(_T("ASDK_MYLAYER"));

    // ���Ɏw�肳��Ă��Ȃ��ꍇ�́A���C���̑��̃v���p�e�B�Ƀf�t�H���g���g�p����܂��B
    pLayerTable->add(pLayerTableRecord);
    pLayerTable->close();
    pLayerTableRecord->close();
}


// �I�u�W�F�N�g�̐F��ύX����
Acad::ErrorStatus changeColor(AcDbObjectId entId, Adesk::UInt16 newColor) {
    AcDbEntity *pEntity;
    // �I�u�W�F�N�g���C������ɂ́A�܂��I�u�W�F�N�g���I�[�v������B
    // open �֐��ł́A���[�h �p�����[�^���g�p���āA�ǂݎ��A�������݁A�ʒm�̂ǂ̖ړI�ŃI�u�W�F�N�g���I�[�v�����邩���w��B
    acdbOpenObject(pEntity, entId, AcDb::kForWrite);
    pEntity->setColorIndex(newColor);
	// �C�����I�������A���[�h�֌W�Ȃ������I�ɃN���[�Y����B
    pEntity->close();
    return Acad::eOk;
}

// ���O���[�v �f�B�N�V���i���ւ̃O���[�v�̒ǉ�
//createLine() �֐� �� createCircle() �֐��ō쐬���������Ɖ~����O���[�v (pGroup) ���쐬���A
// ���̃O���[�v���O���[�v �f�B�N�V���i���ɒǉ����܂��B
	void createGroup(AcDbObjectIdArray& objIds, TCHAR* pGroupName) { 
    AcDbGroup *pGroup = new AcDbGroup(pGroupName);

	// �w�肳�ꂽ�I�u�W�F�N�g�f�B���N�g���ɂ���O���[�v�f�B�N�V���i���Ɋi�[����
    AcDbDictionary *pGroupDict;
    acdbHostApplicationServices()->workingDatabase()->getGroupDictionary(pGroupDict, AcDb::kForWrite);
    AcDbObjectId pGroupId;
    pGroupDict->setAt(pGroupName, pGroup, pGroupId);
    pGroupDict->close();

	// �O���[�v���ǉ����ꂽ�̂ŁA�I�u�W�F�N�gID������B
	// �O���[�v���ǉ����ꂽ�G���e�B�e�B�̂��߂̉i���I�ȃ��A�N�^�ƂȂ�(�d�v)
    for (int i = 0; i < objIds.length(); i++) {
        pGroup->append(objIds[i]);
    }
    pGroup->close();
}


��AutoCAD�f�[�^�x�[�X
�f�[�^�x�[�X
 ��
 �� ��w�e�[�u���� �}�ʃe�[�u�����R�[�h(����)
 ��
 �� �u���b�N�e�[�u���� �u���b�N�e�[�u�����R�[�h(����)���G���e�B�e�B(����)
 ��
 �� ���̃V���{�����R�[�h(����)�����̃V���{���e�[�u�����R�[�h(����)
 ��
 �� Named Object Dictinary�� �I�u�W�F�N�g(����)

��ObjectARX �A�v���P�[�V�������쐬����ɂ́A���̂悤�Ȏ菇���K�v�ł��B
1.�V�����R�}���h����������J�X�^���N���X���쐬���܂��B
  �J�X�^�� �N���X�́A�����Ă��� ObjectARX �K�w����уV���{�� �e�[�u�� �N���X����h���ł��܂��B

2.ObjectARX �A�v���P�[�V�������������� AutoCAD ���b�Z�[�W�����肵�܂��B
  AutoCAD �́AAutoCAD �����ɓ���̃C�x���g�������������Ƃ��������l�ȃ��b�Z�[�W�� ObjectARX �A�v���P�[�V�����ɑ���܂��B�A�v���P�[�V�������ǂ̃��b�Z�[�W�ɉ������邩�A�ǂ̂悤�ȃA�N�V�������N�����邩����肵�܂��B

3.AutoCAD �̃G���g�� �|�C���g���������܂��B
  AutoCAD �́AacrxEntryPoint() �֐����g�p���� ObjectARX �A�v���P�[�V�������Ăяo���܂��B���̊֐��́AC++ �v���O������ main() �֐��ɑ�����̂ł��B�A�v���P�[�V������ acrxEntryPoint() �֐�����������̂́A���[�U�̐ӔC�ɂȂ�܂��BacrxEntryPoint() �֐��́A����܂łɓ���� AutoCAD ���b�Z�[�W�Ɋ֘A�t����ꂽ�֐����Ăяo���܂��B

4.���������������܂��B
  ObjectARX �A�v���P�[�V�������ŁA����܂łɍ쐬�����J�X�^�� �N���X�����������AObjectARX �̃����^�C�� �N���X �c���[���č\�z����K�v������܂��B
  �܂��A�R�}���h��ǉ�����ꍇ�́AAutoCAD ���g�p���ēo�^���Ȃ���΂Ȃ�܂���B

5.���[�h�����̏��������܂��B
����ɓ��삷�� ObjectARX �A�v���P�[�V�������쐬����ɂ́A
�A�v���P�[�V���������[�h��������ۂɃJ�X�^�� �N���X�ƃR�}���h���폜���Ȃ���΂Ȃ�܂���B


��AutoCAD ���b�Z�[�W�ւ̉���
�H
��ObjectARX �A�v���P�[�V�����ł̃C�x���g�̃V�[�P���X

�}�ʂ��I�[�v�����Ă���A�v���P�[�V���������[�h����ƁA
kInitAppMsg ���b�Z�[�W�� kLoadDwgMsg ���b�Z�[�W�������đ����܂��B
�ҏW�Z�b�V�����̓r���� ObjectARX �A�v���P�[�V���������[�h��������ƁA
kUnloadDwg ���b�Z�[�W�� kUnloadApp ���b�Z�[�W�������đ����܂��B

�u���ԁv�u�C�x���g�v        �u���b�Z�[�W�v
 ��                        |
 ���� �N��                 |kInitAppMsg
 ��                        |AcedRegCmds->addCommand("Test2", test1)
 ��                        |
 ���� �}�ʂ��J��           |KLoadDwgMsg ads_defun "c:TEST1"
 ��                        |
 ��                        |
 ���� test1�R�}���h�ďo��  |kInvkSubr
 ��                        |
 ��                        |
 ���� test2�R�}���h�ďo��  |�R���g���[���͒��� "Test2"���[�`���Ɉڂ�
 ��                        |
 ��                        |
 ���� save�R�}���h�ďo��   |kSaveMsg
 ��                        |
 ��                        |
 ���� �I��                 |KUnloadDwgMsg
 ��                        |KQuit
 ��                        |KUnloadApp
 ��                        |

��AutoCAD �̃G���g�� �|�C���g�̎���

// acrxEntryPoint() �֐��̏���
extern "C"
AcRx::AppRetCode acrxEntryPoint(AcRx::AppMsgCode msg, void* pkt);
/*
 *  msg        ObjectARX �J�[�l������A�v���P�[�V�����ɑ����郁�b�Z�[�W�������܂��B
 *  pkt        �p�P�b�g �f�[�^�l��ێ����܂��B
 *  AppRetCode AutoCAD �ɕԂ����X�e�[�^�X �R�[�h���i�[����܂��B
 */

// �L���� switch �X�e�[�g�����g�̃X�P���g��
extern "C"
AcRx::AppRetCode acrxEntryPoint(AcRx::AppMsgCode msg, void* pkt) {
    switch(msg) {
        case AcRx::kInitAppMsg:
            break;
        case AcRx::kUnloadAppMsg:
            break;
        ...
        default:
            break;
    }
    return AcRx::kRetOK;
}

���A�v���P�[�V������
 �A�v���P�[�V�����̃��[�h���ƃ��[�h�������ɌĂяo�����֐����������Ă���B
 ���̏������֐��́A2 �̐V�����R�}���h (CREATE �� ITERATE) �� AutoCAD �ɒǉ����܂��B
����ɁA�V�����N���X AsdkMyClass �����������A����� acrxBuildClassHierarchy()�ɂ��
ObjectARX �K�w�ɒǉ����܂��B
(AsdkMyClass �ɂ��ẮA�J�X�^�� �I�u�W�F�N�g �N���X�̗�Ő������Ă��܂��B)

// The initialization function called from the acrxEntryPoint()
// function during the kInitAppMsg case is used to add commands
// to the command stack and to add classes to the ACRX class
// hierarchy.
//
void initApp() {
    acedRegCmds->addCommand(_T("ASDK_DICTIONARY_COMMANDS"), _T("ASDK_CREATE"), _T("CREATE"), ACRX_CMD_MODAL, createDictionary);
    acedRegCmds->addCommand(_T("ASDK_DICTIONARY_COMMANDS"), _T("ASDK_ITERATE"), _T("ITERATE"), ACRX_CMD_MODAL, iterateDictionary);
    AsdkMyClass::rxInit();
    acrxBuildClassHierarchy();
}

// The cleanup function called from the acrxEntryPoint() 
// function during the kUnloadAppMsg case removes this application's
// command set from the command stack and removes this application's
// custom classes from the ACRX runtime class hierarchy.
//
void unloadApp() {
    acedRegCmds->removeGroup(_T("ASDK_DICTIONARY_COMMANDS"));

    // Remove the AsdkMyClass class from the ACRX runtime
    // class hierarchy. If this is done while the database is
    // still active, it should cause all objects of class
    // AsdkMyClass to be turned into proxies.
    //
    deleteAcRxClass(AsdkMyClass::desc());
}

���V�����R�}���h�̓o�^
��ObjectARX �A�v���P�[�V�����̃��[�h
���A�v���P�[�V�����̃��b�N����

���G���[����
�K���߂�l���`�F�b�N���ēK�؂ȃA�N�V�������s���K�v������܂��B
���̗�́A�f�[�^�x�[�X�̎�����Ŏ�������ł̃G���[ �`�F�b�N�̎g�p�@�������Ă��܂��B

Acad::ErrorStatus createCircle(AcDbObjectId& circleId) {
    circleId = AcDbObjectId::kNull;
    AcGePoint3d center(9.0, 3.0, 0.0);
    AcGeVector3d normal(0.0, 0.0, 1.0);
    AcDbCircle *pCirc = new AcDbCircle(center, normal, 2.0);
    if (pCirc == NULL)
        return Acad::eOutOfMemory;
    AcDbBlockTable *pBlockTable;
    Acad::ErrorStatus es = acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pBlockTable, AcDb::kForRead);
    if (es != Acad::eOk) {
        delete pCirc;
        return es;
    }
    AcDbBlockTableRecord *pBlockTableRecord;
    es = pBlockTable->getAt(ACDB_MODEL_SPACE, pBlockTableRecord, AcDb::kForWrite);
    if (es != Acad::eOk) {
        Acad::ErrorStatus es2 = pBlockTable->close();
        if (es2 != Acad::eOk) {
            acrx_abort(_T("\nApp X failed to close Block Table. Error: %d"), acadErrorStatusText(es2));
        }
        delete pCirc;
        return es;
    }
    es = pBlockTable->close();
    if (es != Acad::eOk) {
        acrx_abort(_T("\nApp X failed to close Block Table. Error: %d"), acadErrorStatusText(es));
    }
    es = pBlockTableRecord->appendAcDbEntity(circleId, pCirc);
    if (es != Acad::eOk) {
        Acad::ErrorStatus es2 = pBlockTableRecord->close();
        if (es2 != Acad::eOk) {
            acrx_abort(_T("\nApp X failed to close Model Space Block Record. Error: %s"), acadErrorStatusText(es2));
        }
        delete pCirc;
        return es;
    }
    es = pBlockTableRecord->close();
    if (es != Acad::eOk) {
        acrx_abort(_T("\nApp X failed to close Model Space Block Record. Error: %d"), acadErrorStatusText(es));
    }
    es = pCirc->close();
    if (es != Acad::eOk) {
        acrx_abort(_T("\nApp X failed to close circle entity. Error: %d"), acadErrorStatusText(es));
    }
    return es;
}
Acad::ErrorStatus createNewLayer() {
    AcDbLayerTableRecord *pLayerTableRecord = new AcDbLayerTableRecord;
    if (pLayerTableRecord == NULL)
        return Acad::eOutOfMemory;
    Acad::ErrorStatus es = pLayerTableRecord->setName(_T("ASDK_MYLAYER"));
    if (es != Acad::eOk) {
        delete pLayerTableRecord;
        return es;
    }
    AcDbLayerTable *pLayerTable;
    es = acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pLayerTable, AcDb::kForWrite);
    if (es != Acad::eOk) {
        delete pLayerTableRecord;
        return es;
    }
    // The linetype object ID default is 0, which is
    // not a valid ID.  Therefore, it must be set to a
    // valid ID, the CONTINUOUS linetype.
    // Other data members have valid defaults, so
    // they can be left alone.
    //
    AcDbLinetypeTable *pLinetypeTbl;
    es = acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pLinetypeTbl, AcDb::kForRead);
    if (es != Acad::eOk) {
        delete pLayerTableRecord;
        es = pLayerTable->close();
        if (es != Acad::eOk) {
            acrx_abort(_T("\nApp X failed to close Layer Table. Error: %d"), acadErrorStatusText(es));
        }
        return es;
    }
    AcDbObjectId ltypeObjId;
    es = pLinetypeTbl->getAt(_T("CONTINUOUS"), ltypeObjId);
    if (es != Acad::eOk) {
        delete pLayerTableRecord;
        es = pLayerTable->close();
        if (es != Acad::eOk) {
            acrx_abort(_T("\nApp X failed to close Layer Table. Error: %d"), acadErrorStatusText(es));
        }
        return es;
    }
    pLayerTableRecord->setLinetypeObjectId(ltypeObjId);
    es = pLayerTable->add(pLayerTableRecord);
    if (es != Acad::eOk) {
        Acad::ErrorStatus es2 = pLayerTable->close();
        if (es2 != Acad::eOk) {
            acrx_abort(_T("\nApp X failed to close Layer Table. Error: %d"), acadErrorStatusText(es2));
        }
        delete pLayerTableRecord;
        return es;
    }
    es = pLayerTable->close();
    if (es != Acad::eOk) {
        acrx_abort(_T("\nApp X failed to close Layer Table. Error: %d"), acadErrorStatusText(es));
    }
    es = pLayerTableRecord->close();
    if (es != Acad::eOk) {
        acrx_abort(_T("\nApp X failed to close Layer Table Record. Error: %d"), acadErrorStatusText(es));
    }
    return es;
}

���f�[�^�x�[�X����
9 �̃V���{�� �e�[�u���̃Z�b�g 
�u���b�N �e�[�u��           ��(AcDbBlockTable)
���@�X�^�C�� �e�[�u��       ��(AcDbDimStyleTable)
��w�e�[�u��                ��(AcDbLayerTable)
����e�[�u��                ��(AcDbLinetypeTable)
�o�^�A�v���P�[�V�����e�[�u����(AcDbRegAppTable)
�����X�^�C�� �e�[�u��       ��(AcDbTextStyleTable)
���[�U���W�n�e�[�u��        ��(AcDbUCSTable)
�r���[�|�[�g �e�[�u��       ��(AcDbViewportTable)
�r���[ �e�[�u��             ��(AcDbViewTable)

�E�V���{�� �e�[�u���́A���߂��� 1 �܂��͕����̃��R�[�h�������Ă�����̂�����܂��B
�E������Ԃ̃f�[�^�x�[�X�ɂ����w�e�[�u���́A1 �̃��R�[�h (��w 0) ���܂�ł��܂��B
�E������Ԃ̃u���b�N �e�[�u���ɂ́A���ł� 3 �̃��R�[�h�������Ă��܂��B
	(*MODEL_SPACE�A*PAPER_SPACE�A*PAPER_SPACE0) 
�E����e�[�u���ɂ͏�ɁACONTINUOUS�ABY_LAYER�ABY_BLOCK �̐���e�[�u�� ���R�[�h�������Ă��܂��B
�E�o�^�A�v���P�[�V���� �e�[�u���ɂ́A��� ACAD �e�[�u�� ���R�[�h������܂��B
�E�����X�^�C�� �e�[�u���ɂ͏�� STANDARD �e�[�u�� ���R�[�h������܂��B

�ENamed Object Dictionary�B�f�[�^�x�[�X���쐬�������_�ŁA
���̃f�B�N�V���i���ɂ͊��� 2 �̃f�[�^�x�[�X �f�B�N�V���i���������Ă��܂��B
GROUP �f�B�N�V���i���� MLINE �X�^�C�� �f�B�N�V���i���ł��B
�EMLINE �X�^�C�� �f�B�N�V���i���ɂ́ASTANDARD �X�^�C������ɑ��݂��܂��B
�w�b�_�[�ϐ��̌Œ�Z�b�g (�f�[�^�x�[�X �I�u�W�F�N�g�͂���܂���)�B


�������f�[�^�x�[�X����̐V�����f�[�^�x�[�X�̍쐬
//WBLOCK* �R�}���h�ɑ������܂��B
	Acad::ErrorStatus AcDbDatabase::wblock(AcDbDatabase*& pOutputDb);

���G���e�B�e�B�̂���V�����f�[�^�x�[�X�̍쐬
//���O�̕t�����u���b�N�̃R�s�[
Acad::ErrorStatus AcDbDatabase::wblock(
	AcDbDatabase*& pOutputDb, AcDbObjectId blockId);

	blockId �����́A���̓f�[�^�x�[�X�ɂ���u���b�N �e�[�u�� ���R�[�h��\���܂��B
	���̃u���b�N �e�[�u�� ���R�[�h�ɂ���G���e�B�e�B���A
	�V�����f�[�^�x�[�X�̃��f����ԃu���b�N �e�[�u�� ���R�[�h�ɃR�s�[����܂��B
	�V�����f�[�^�x�[�X�̑}����_�́A�u���b�N �e�[�u�� ���R�[�h�̌��_�ł��B

//�G���e�B�e�B�̔z��̃R�s�[
���̊֐��́AWBLOCK �R�}���h���Ăяo������ŁA�I�v�V�������g�p���ē���̃I�u�W�F�N�g��I�����A
�}����_���w�肷��P�[�X�ɑ������܂��B
Acad::ErrorStatus AcDbDatabase::wblock(
    AcDbDatabase*& pOutputDb,
    const AcDbObjectIdArray& outObjIds,
    const AcGePoint3d* basePoint);

	���̊֐��́AoutObjIds �����Ŏw�肳�ꂽ�G���e�B�e�B���܂ސV�����f�[�^�x�[�X���쐬���܂��B
	�w�肳�ꂽ�G���e�B�e�B(���̓f�[�^�x�[�X�̃��f����Ԃ܂��̓y�[�p�[��Ԃ�
	�ǂ���̃u���b�N �e�[�u�� ���R�[�h�̃G���e�B�e�B�ł����܂��܂���)�́A
	�V�����f�[�^�x�[�X�̃��f����Ԃɒu����܂��B
	�V�����f�[�^�x�[�X�ɂ͂��̂ق��ɁA�����̃G���e�B�e�B�����L�܂��͎Q�Ƃ��Ă���I�u�W�F�N�g��A
	�����̃I�u�W�F�N�g�����L���Ă���I�u�W�F�N�g����荞�܂�܂��B
	�w�肳�ꂽ�_�́A�V�����}�ʂ̃��[���h���W�̌��_
	(�܂�A�V�����f�[�^�x�[�X�̃��f����Ԃł̑}����_)�ł��B

AcDbDatabase::wblock() �֐��̍ŏI�o�[�W�������A�G���e�B�e�B�̔z����R�s�[���A
�}����_���w�肵�܂����A�V�����f�[�^�x�[�X�̏d���V���{����f�B�N�V���i�� �G���g����
�������@���w�肷��ǉ��p�����[�^������܂��B

Acad::ErrorStatus
AcDbDatabase::wblock(
    AcDbDatabase*& pOutputDb,
    const AcDbObjectIdArray& outObjIds,
    const AcGePoint3d* basePoint,
    AcDb::DuplicateRecordCloning drc);

���f�[�^�x�[�X�̑}��
// �W���}�ʂ� INSERT[�}��]�R�}���h�Ɠ����ł��B
Acad::ErrorStatus
AcDbDatabase::insert(
    AcDbObjectId& blockId,
    const ACHAR* pBlockName,
    AcDbDatabase* pDb,
    bool preserveSourceDatabase = true);

�����݂̃f�[�^�x�[�X�l�̐ݒ�
1.�F
�G���e�B�e�B�̐F���w�肵�Ȃ��ƁACECOLOR �V�X�e���ϐ��ɕۑ�����Ă���A
�f�[�^�x�[�X�̌��݂̐F�̒l���g���܂��B
���̊֐��́A�f�[�^�x�[�X�ɂ��錻�݂̐F�̒l��ݒ肵�Ď��o���܂��B

Acad::ErrorStatus AcDbDatabase::setCecolor(const AcCmColor& color);
AcCmColor AcDbDatabase::cecolor() const;

2.����
���̊֐��́A�f�[�^�x�[�X�ɂ��錻�݂̐���̒l��ݒ�A�擾���܂��B

Acad::ErrorStatus AcDbDatabase::setCeltype(AcDbObjectId objId);
AcDbObjectId AcDbDatabase::celtype() const;

3.����ړx
�f�[�^�x�[�X�ɂ� 3 �̐���ړx�ݒ肪����܂��B

�E���݂̃G���e�B�e�B�ɂ��Ă̐���ړx�ݒ�BCELTSCALE �V�X�e���ϐ��ɕۑ������B
�E���݂̐}�ʂɂ��Ă̐���ړx�ݒ�BLTSCALE �V�X�e���ϐ��ɕۑ������B
�E����ړx���A�G���e�B�e�B�������Ă����ԂɓK�p���邩�A�y�[�p�[��Ԃɕ\���G���e�B�e�B�̊O�ςɓK�p���邩���w������t���O�B���̐ݒ�� PSLTSCALE �V�X�e���ϐ��ɕۑ������B

�}�ʂ��č쐬����Ƃ��́ALTSCALE �� PSLTSCALE �̃O���[�o���ݒ肪�g�p����܂�
(�ڍׂ́A�G���e�B�e�B���Q�Ƃ��Ă�������)�B
�����̒l�̐ݒ�ƏƉ���s���ɂ́A���̊֐����g�p���܂��B

Acad::ErrorStatus AcDbDatabase::setLtscale(double scale);
double AcDbDatabase::ltScale() const;
 
Acad::ErrorStatus AcDbDatabase::setCeltscale(double scale);
double AcDbDatabase::celtscale() const;
 
Acad::ErrorStatus AcDbDatabase::setPsltscale(bool scale)
bool AcDbDatabase::psltscale() const;

4.��w
���̊֐��́A�f�[�^�x�[�X�ɂ��錻�݂̉�w�̒l��ݒ�A�擾���܂��B

Acad::ErrorStatus AcDbDatabase::setClayer(AcDbObjectId objId);
AcDbObjectId AcDbDatabase::clayer() const;

���f�[�^�x�[�X����̗�
���̗�́AcreateDwg() ���[�`����\���Ă��܂����A
���̃��[�`���͐V�����f�[�^�x�[�X���쐬���A
���f����ԃu���b�N �e�[�u�� ���R�[�h���擾���A
���f����Ԃɒǉ������ 2 �̉~���쐬���܂��B
����� AcDbDatabase::saveAs() �֐����g�p���Đ}�ʂ�ۑ����܂��B

2 �Ԗڂ̃��[�`���ł��� readDwg() �́A�ۑ����ꂽ�}�ʂ�ǂݍ��݁A
���f����ԃu���b�N �e�[�u�� ���R�[�h���I�[�v�����A����𑖍��A
���Ɋ܂܂��G���e�B�e�B�̃N���X�����o�͂��܂��B

void createDwg() {
	AcDbDatabase *pDb = new AcDbDatabase();

	AcDbBlockTable *pBtbl;
	pDb->getSymbolTable(pBtbl, AcDb::kForRead);

	AcDbBlockTableRecord *pBtblRcd;
	pBtbl->getAt(ACDB_MODEL_SPACE, pBtblRcd, AcDb::kForWrite);   pBtbl->close();

	pBtblRcd->appendAcDbEntity(pCir1);
	pCir1->close();
	pBtblRcd->appendAcDbEntity(pCir2);
	pCir2->close();
	pBtblRcd->close();

	// AcDbDatabase::saveAs() does not automatically
	// append a DWG file extension, so it
	// must be specified.

	pDb->saveAs(_T("c:\\test1.dwg"));
	delete pDb;
}

void readDwg(){
	// Set constructor parameter to kFalse so that the
	// database will be constructed empty.  This way only
	// what is read in will be in the database.
	AcDbDatabase *pDb = new AcDbDatabase(Adesk::kFalse);
	// The AcDbDatabase::readDwgFile() function
	// automatically appends a DWG extension if it is not
	// specified in the filename parameter.
	if(Acad::eOk != pDb->readDwgFile(_T("c:\\test1.dwg")))
		return;
	// Open the model space block table record.
	AcDbBlockTable *pBlkTbl;
	pDb->getSymbolTable(pBlkTbl, AcDb::kForRead);
	AcDbBlockTableRecord *pBlkTblRcd;
	pBlkTbl->getAt(ACDB_MODEL_SPACE, pBlkTblRcd, AcDb::kForRead);
	pBlkTbl->close();
	AcDbBlockTableRecordIterator *pBlkTblRcdItr;
	pBlkTblRcd->newIterator(pBlkTblRcdItr);
	AcDbEntity *pEnt;
	{
	  pBlkTblRcdItr->getEntity(pEnt, AcDb::kForRead);
	  acutPrintf(_T("classname: %s\n"), (pEnt->isA())->name());
	  pEnt->close();
	}
	pBlkTblRcd->close();
	delete pBlkTblRcdItr;
	delete pDb;
}

�������O �g�����U�N�V����
�����O �g�����U�N�V�����́AAutoCAD �Q�ƕҏW�@�\���T�|�[�g����ۂɎg�p�����
���O���Q��
�O���Q�� (xrefs) �́A�������̃O���[�o���֐����g�p���č쐬�����삷�邱�Ƃ��ł��܂��B
���C���f�b�N�X�ƃt�B���^
�C���f�b�N�X�ƃt�B���^�̃N���X����ъ֐��́A
�u���b�N �f�[�^�̃J�X�^�� �C���f�b�N�X�ƃJ�X�^�� �t�B���^���`���邽�߂̋@�\��
�A�v���P�[�V�����ɒ񋟂��܂��B
���t�@�C���̊T�v���
AutoCAD ���[�U�́A[�}�ʂ̃v���p�e�B]�_�C�A���O �{�b�N�X���g�p���āA
�⏕�f�[�^ (�t�@�C���̊T�v���ƌĂ΂��) �� DWG �t�@�C���ɖ��ߍ��ނ��Ƃ��ł��܂�

�����f�[�^�x�[�X����
�f�[�^�x�[�X�̍쐬�A�}�ʃt�@�C���̓ǂݍ��݁A�f�[�^�x�[�X�̕ۑ��̕��@�Ȃǂ��܂ށA
��{�I�ȃf�[�^�x�[�X �v���g�R���ɂ��Đ������܂��B
wblock �� insert �̃I�y���[�V�����ɂ��Ă��������܂��B

���I�u�W�F�N�g�̃I�[�v���N���[�Y
+-------------+
|DWG �n���h�� |
+-------------+
Save �܂��́����}�ʂ��I�[�v��
Wblock     ����
�R�}���h   ����
		+----------------+
		|AcDbDatabase    |
		| �I�u�W�F�N�gID |
		+----------------+
			�I�u�W�F�N�g �����I�u�W�F�N�g
			���N���[�Y   �������I�[�v��
					     ����
					+----------+
					|C++       |
					|�|�C���^  |
					+----------+

1.�I�u�W�F�N�g���I�[�v������
	�EacdbOpenObject �O���[�o���֐����g�p���܂��B
	�EgetAcDbObjectId �֐����g�p���āA�I�u�W�F�N�g ID �Ƀn���h�����}�b�v���邱�Ƃ��ł��܂��B
	�E�I�u�W�F�N�g���I�[�v�����Ă��̃n���h����v�����邱�Ƃ��ł��܂��B

	AcDbObject* pObject;
	AcDbHandle handle;
	pObject->getAcDbHandle(handle);

	����: �f�[�^�x�[�X �I�u�W�F�N�g���I�[�v�������ꍇ�A
	�K��������ł��邾�������@��ɃN���[�Y����B
	AcDbObject::close() �֐����g�p����B


	ads_name �� AcDbObjectId �ɑ������܂��B
	AcDb ���C�u�����ɂ� 2 �̃X�^���h�A�����֐�������A
	�������g�p���� AcDbObjectId �� ads_name �Ƃ̊Ԃł̕ϊ����ł��܂��B

	//ads_name �� AcDbObjectId
	acdbGetAdsName(ads_name& objName, AcDbObjectId objId); 
	acdbGetObjectId(AcDbObjectId& objId, ads_name objName); 


��ʂɁA�I���q�̒�����I�u�W�F�N�g���擾����ƁA���̃I�u�W�F�N�g�� ads_name �����ŕԂ���܂��B
���� ads_name �� AcDbObjectId �ƌ������āA������I�[�v������K�v������܂��B


AcDbEntity* selectEntity(AcDbObjectId& eId, AcDb::OpenMode openMode) {
    ads_name en;
    ads_point pt;
    acedEntSel(_T("\n�G���e�B�e�B��I�����Ă�������: "), en, pt);

    // ads_name��ObjectID��ϊ�����
    acdbGetObjectId(eId, en);
    AcDbEntity * pEnt;
    acdbOpenObject(pEnt, eId, openMode);
    return pEnt;
}

�EopenMode
���� 3 �ʂ�̃��[�h�ŃI�u�W�F�N�g���I�[�v�����邱�Ƃ��ł��܂��B
	1.kForRead
		���ɏ������ݗp�܂��͒ʒm�p�ɃI�[�v������Ă���ꍇ�������āA
		�I�u�W�F�N�g�͓����� 256 �܂œǂݍ��ݗp�ɃI�[�v���ł��܂��B
	2.kForWrite
		���ɃI�[�v������Ă���ꍇ�������āA
		�I�u�W�F�N�g���������ݗp�ɃI�[�v���ł��܂��B
		���ɃI�[�v������Ă���ꍇ�́A�I�[�v���ł��܂���B
	3.kForNotify
		�I�u�W�F�N�g���N���[�Y���Ă���ꍇ��A�ǂݍ��ݗp�ɃI�[�v������Ă���ꍇ�A
		�܂��͏������ݗp�ɃI�[�v������Ă���ꍇ�́A
		�I�u�W�F�N�g��ʒm�p�ɃI�[�v�����邱�Ƃ��ł��܂��B
		���������ɒʒm�p�ɃI�[�v������Ă���ꍇ�̓I�[�v���ł��܂���B�ʒm���Q�Ƃ��Ă��������B
		�A�v���P�[�V�������I�u�W�F�N�g��ʒm�p�ɃI�[�v�����ăI�u�W�F�N�g�ɒʒm��
		����K�v������̂͂����܂�ł��B

�E�A���Ă����G���[�R�[�h�͐}���Q��

���I�u�W�F�N�g�̍폜
AcDbObject �I�u�W�F�N�g�̃C���X�^���X���쐬����Ƃ��́AAcDbObject::new() �֐����g�p���܂��B

�I�u�W�F�N�g���ŏ��ɍ쐬���ăf�[�^�x�[�X�ɒǉ�����O�ł���΁A�폜�ł��܂��B
�������A�f�[�^�x�[�X�ɒǉ����Ă��܂����I�u�W�F�N�g�́A�폜�ł��܂���B
�f�[�^�x�[�X�풓�̃I�u�W�F�N�g�̍폜�́AAutoCAD ���Ǘ����܂��B

���I�u�W�F�N�g�ŗL�f�[�^�̒ǉ�
	AcDbObject::xData() �֐����g�p���āA

	�I�u�W�F�N�g�� Xdata �̃R�s�[���܂� resbuf �`�F�[�����擾���܂��B
	virtual resbuf* AcDbObject::xData(const ACHAR* regappName = NULL) const;

	AcDbObject::setXData() �֐����g�p���āA�I�u�W�F�N�g�� Xdata ���w�肵�܂��B
	virtual Acad::ErrorStatus AcDbObject::setXData(const resbuf* xdata);

	// xData() ���g�p���đI�����ꂽ�I�u�W�F�N�g�� Xdata ���擾���A
	// ���� Xdata ����ʂɏo�͂��܂��B
	// ���ɁAXdata �ɕ����� (testrun) ��ǉ����āA
	// �I�u�W�F�N�g�� Xdata ���C�����邽�߂� setXdata() ���Ăяo���܂��B
	// ����ɁA���̗�� upgradeOpen() �֐��� downgradeOpen() �֐��̎g�p�@�������Ă��܂��B

// This function calls the selectObject() function to allow 
// the user to pick an object; then it accesses the xdata of 
// the object and sends the list to the printList() function 
// that lists the restype and resval values.
// 
void printXdata() {
    // �I�u�W�F�N�g��I�����ĊJ��
    AcDbObject *pObj;
    if ((pObj = selectObject(AcDb::kForRead)) == NULL) {
        return;
    }

    // �g���f�[�^�̃A�v���P�[�V���������擾���܂��B
    //
    TCHAR appname[133];
    if (acedGetString(NULL, _T("\n�ړI��XdataAPP������͂���: "), appname) != RTNORM) {
        return;
    }

    // �A�v���P�[�V�������̊g���f�[�^���擾����
    struct resbuf *pRb;
    pRb = pObj->xData(appname);
    if (pRb != NULL) {
		// ���݂���ꍇ�́A������xdata���o�͂��܂��B
		// LISP�ɂ�-3�O���[�v���Ȃ����Ƃɒ��ӂ��Ă��������B
		// �����xdata�����Ȃ̂ŁA-3 xdata-start marker�͕K�v����܂���B
        printList(pRb);
        acutRelRb(pRb);

    } else {
        acutPrintf(_T("\n�Y������APP���Ɋg���f�[�^�͂���܂���"));
    }
    pObj->close();
}

void addXdata() {
	AcDbObject* pObj = selectObject(AcDb::kForRead);
	if (!pObj) {
		acutPrintf(_T("Error selecting object\n"));
		return;
	}
	// Get the application name and string to be added to
	// xdata.
	//
	TCHAR appName[132], resString[200];
	appName[0] = resString[0] = _T('\0');
	acedGetString(NULL, _T("Enter application name: "), appName);
	acedGetString(NULL, _T("Enter string to be added: "), resString);
	struct  resbuf  *pRb, *pTemp;
	pRb = pObj->xData(appName);
	if (pRb != NULL) {
		// If xdata is present, then walk to the
		// end of the list.
		for (pTemp = pRb; pTemp->rbnext != NULL; pTemp = pTemp->rbnext) { ; }
	}
	else {
		// If xdata is not present, register the application
		// and add appName to the first resbuf in the list.
		// Notice that there is no -3 group as there is in
		// AutoLISP. This is ONLY the xdata so
		// the -3 xdata-start marker isn't needed.
		//
		acdbRegApp(appName);
		pRb = acutNewRb(AcDb::kDxfRegAppName);
		pTemp = pRb;
		const size_t nSize = _tcslen(appName) + 1;
		pTemp->resval.rstring = (TCHAR*) malloc(nSize * sizeof(TCHAR));
		errno_t err = _tcscpy(pTemp->resval.rstring, appName);
		assert(err == 0)
	}
	// Add user-specified string to the xdata.   
	pTemp->rbnext = acutNewRb(AcDb::kDxfXdAsciiString);
	pTemp = pTemp->rbnext;
	const size_t nSize = _tcslen(resString) + 1;
	pTemp->resval.rstring = (TCHAR*) malloc(nSize * sizeof(TCHAR));
	errno_t err = _tcscpy_s(pTemp->resval.rstring, nSize, resString);
	assert(err == 0)
	// The following code shows the use of upgradeOpen()   
	// to change the entity from read to write.   
	pObj->upgradeOpen();
	pObj->setXData(pRb);

	pObj->close();
	acutRelRb(pRb);
}

��ObjectARX �g���f�B�N�V���i���̗�
���O���[�o���֐��ł̊g���f�B�N�V���i���̗�

���I�u�W�F�N�g�̍폜
�f�[�^�x�[�X���̃I�u�W�F�N�g�́A���̊֐����g�p���č폜�ł��܂��B

Acad::ErrorStatus AcDbObject::erase( Adesk::Boolean Erasing = true);

��:
	erase() �֐��ɂ́A�f�[�^�x�[�X �I�u�W�F�N�g�ƃG���e�B�e�B�ɑ΂��ẮA
	�폜�ƕ����� 2 �̋@�\������܂��B
	�f�[�^�x�[�X �I�u�W�F�N�g���폜���ꂽ�Ƃ��A�f�B�N�V���i������I�u�W�F�N�g�ɂ��Ă̏����폜����܂��B
	�I�u�W�F�N�g�� erase(kfalse) �ŕ������Ă��A���͎����ł͕������܂���B
	setAt() �֐����g�p���āA�Ăуf�B�N�V���i���ɒǉ�����K�v������܂��B
	�G���e�B�e�B���폜���ꂽ�Ƃ��A�u���b�N �e�[�u�� ���R�[�h�ɍ폜�t���O���ݒ肳��܂��B
	�G���e�B�e�B�� erase(kfalse) �ŕ������邱�Ƃ��ł��܂��B
	����ł́AacdbOpenObject() �֐��ō폜���ꂽ�I�u�W�F�N�g���I�[�v�����邱�Ƃ͂ł��܂���B
	�����A���݂�� eWasErased �G���[�R�[�h���Ԃ���܂��B

	extern Acad::ErrorStatus
	acdbOpenObject(
	    AcDbObject*& obj,
	    AcDbObjectId objId,
	    AcDb::OpenMode openMode,
	    Adesk::Boolean openErasedObject = Adesk::kFalse);

	acdbOpenObject() �֐��̍Ō�̈����� kTrue �ɐݒ肷��ƁA
	�폜���ꂽ�I�u�W�F�N�g���I�[�v���ł��܂��B

	�|�����C����u���b�N �e�[�u�� ���R�[�h�̂悤�ȃR���e�i �I�u�W�F�N�g�͒ʏ�A
	�C�e���C�g (����) ���s���ۂɍ폜�ςݗv�f�𖳎�����I�v�V������񋟂��܂��B
	����l�ł́A�폜����Ă���v�f�͖������܂��B

	�폜���ꂽ�I�u�W�F�N�g�� DWG �t�@�C���ɂ� DXF �t�@�C���ɂ��t�@�C�� �A�E�g����܂���B

�����ߍ��݃I�u�W�F�N�g�ƃJ�v�Z�����I�u�W�F�N�g

���G���e�B�e�B
	�G���e�B�e�B�Ƃ́A�O���t�B�b�N�\�������f�[�^�x�[�X �I�u�W�F�N�g�ł��B
	���ׂẴG���e�B�e�B�����ʂ��Ď����Ă���v���p�e�B�ƃI�y���[�V�����̃��X�g���f�ڂ��܂��B
	���̑��A�u���b�N�A�}���A�����G���e�B�e�B�̍쐬���@�ƁA
	�T�u�G���e�B�e�B��I�����ăn�C���C�g�\��������@�̗����肠���܂��B

���G���e�B�e�B��`
	�G���e�B�e�B�̗�Ƃ��ẮA�����A�~�A�~�ʁA�����A�\���b�h�A���[�W�����A�X�v���C���A�ȉ~������܂��B
	AcDbEntity �N���X�́AAcDbObject ����h�����Ă��܂��B
	���S�ȃN���X�K�w�}�́AObjectARX �� classmap �t�H���_�� classmap.dwg
	���Q�Ƃ��Ă��������B

	�������̗�O�������A�G���e�B�e�B�ɂ̓W�I���g���ɂ��Ă̕K�v��񂪂��ׂĊ܂܂�Ă��܂��B
	�������̃G���e�B�e�B�́A�W�I���g�����܂��͑����̓��������̃I�u�W�F�N�g���܂�ł��܂��B
	�����G���e�B�e�B�͎��̂Ƃ���ł��B

	AcDb2dPolyline     (AcDb2dVertex �I�u�W�F�N�g�����L)
	AcDb3dPolyline     (AcDb3dPolylineVertex �I�u�W�F�N�g�����L)
	AcDbPolygonMesh    (AcDbPolygonMeshVertex �I�u�W�F�N�g�����L)
	AcDbPolyFaceMesh   (AcDbPolyFaceMeshVertex �I�u�W�F�N�g�� AcDbFaceRecord �I�u�W�F�N�g�����L)
	AcDbBlockReference (AcDbAttribute �I�u�W�F�N�g�����L)
	AcDbMInsertBlock   (AcDbAttribute �I�u�W�F�N�g�����L)

���G���e�B�e�B �I�[�i�[�V�b�v
	�f�[�^�x�[�X���̃G���e�B�e�B�́A�ʏ� AcDbBlockTableRecord �ɑ����Ă��܂��B
	�V�����쐬���ꂽ�f�[�^�x�[�X���̃u���b�N �e�[�u���ɂ́A
		*MODEL_SPACE�A*PAPER_SPACE�A*PAPER_SPACE0
	�� 3 �̒�`�ς݃��R�[�h������܂�
	(1 �̓��f����Ԃ������A���Ƃ� 2 �͒�`�ς݂̃y�[�p�[��ԃ��C�A�E�g�������܂�)�B
	��ʂ� BLOCK[�u���b�N�o�^]�AHATCH[�n�b�`���O]�A�܂��� DIM[���@�L��]�R�}���h�����s����
	���[�U���V�����u���b�N (�u���b�N ���R�[�h) ���쐬����ƁA���R�[�h���ǉ�����܂��B

	�f�[�^�x�[�X �G���e�B�e�B�̃I�[�i�[�V�b�v�\���͎��̂Ƃ���ł��B

	AcDbDatabase
	��
	��AcDbBlockTable
	  ��
	  ��AcDbBlockTableRecord(����)
	    ��
	    ��AcDbBlockBegin
	    ��
	    ��AcDbEntity(����)
	    �� ��
	    �� �� AcDbxxxVertex�܂��́AAcDbFaceRecord�܂��́AAcDbAttribute(����)
	    �� ��
	    �� �� AcDbDequenceEnd
	    �� 
	    ��AcDbBlockEnd

�����ʃG���e�B�e�B�v���p�e�B
	�u���b�N �e�[�u�� ���R�[�h�ɃG���e�B�e�B��ǉ�����ƁA
	AutoCAD �͎����I�� AcDbEntity::setDatabaseDefaults() �֐����Ăяo���܂��B
	���̊֐��́A�v���p�e�B�������I�Ɏw�肳��Ă��Ȃ��ꍇ�Ɋ���l�ɐݒ肵�܂��B

	1.�F
		�������F�C���f�b�N�X�́AAcCmColor::getColorIndex() �����o�֐����g�p����
		AcCmColor �̃C���X�^���X����擾�B
		
		1~7�F�W���F
		 8~255�F�f�B�X�v���C���u�ɂ���Ē�`
		 0   BYBLOCK
		 256 BYLAYER
		 257 ���F�B���̒l�����݂���̂́A
		     �G���e�B�e�B�̍ŏ��̃C���X�^���X��������A0 �` 256 �̒l�ŐF��ݒ肷��܂ł̊ԁA�܂���
		     �G���e�B�e�B���f�[�^�x�[�X�ɒǉ����āA�f�[�^�x�[�X�̌��݂̐F�C���f�b�N�X���󂯌p���Ƃ��܂ł̊Ԃ���

	2.����
	�G���e�B�e�B��ǉ�����f�[�^�x�[�X�� AcDbLineTypeTableRecord �̃I�u�W�F�N�g ID �Ŏw��ł��܂��B
	���ʂȐ��퍀�ڂł��B
	CONTINUOUS  ����V���{�� �e�[�u���Ŏ����I�ɍ쐬�����A����l�̐���
	BYLAYER     �G���e�B�e�B�̉�w�̐���l
	BYBLOCK     �G���e�B�e�B�̎��̓u���b�N��`�̌��݂̃u���b�N�Q�Ƃ̐���l

	setLinetype �֐�
		���O�܂��̓I�u�W�F�N�g ID �ŃG���e�B�e�B�̐����ݒ�
	linetype �֐�
		���݂̃G���e�B�e�B�̐���̖��O��Ԃ��B
	linetypeId �֐�
	������w�肷��V���{�� �e�[�u�� ���R�[�h�̃I�u�W�F�N�g ID ��Ԃ�


	3.����ړx
	�E�G���e�B�e�B���ƂɎw�肳������ړx
		setLinetypeScale �֐�
		linetypeScale �֐�
			�G���e�B�e�B�̐���ړx��ݒ肨��яƉ�
	4.�\��
	�E�G���e�B�e�B���Ƃɕ\��/��\����ݒ�
		setVisibility �֐�
		visibility �֐�
			�G���e�B�e�B�̕\����ݒ肨��яƉ�
	5.��w
	setLayer �֐�
		���O�܂��̓I�u�W�F�N�g ID �ɂ��G���e�B�e�B�̉�w��ݒ�ł��܂��B
	layer �֐�
		���݂̃G���e�B�e�B�̉�w����Ԃ��܂��B
	layerId �֐�
		���݂̉�w(�^�C�v AcDbLayerTableRecord�̃I�u�W�F�N�g)�̃I�u�W�F�N�g ID ��Ԃ��܂��B

�����ʂ̃G���e�B�e�B�֐�
	intersectWith() �́A�g���~���O�A�����A�t�B���b�g�A�ʎ��A�����폜�A�I�u�W�F�N�g �X�i�b�v�����I�y���[�V�����Ɏg�p���܂��B
	transformBy() �́A�I�u�W�F�N�g���̓_���A�ړ��A�ړx�ύX�A�܂��͉�]������ϊ��}�g���b�N�X��n�����߂Ɏg�p���܂��B
	getTransformedCopy() �́A�I�u�W�F�N�g�̃R�s�[���쐬���āA����ɕϊ���K�p���܂��B
	getOsnapPoints() �́A�X�i�b�v�_����уX�i�b�v�_�̎�ނ�Ԃ��܂��B
	getGripPoints() �́A�X�g���b�`�_�̃X�[�p�[�Z�b�g�ł���O���b�v�_��Ԃ��܂��B
	getStretchPoints() �́AgetGripPoints() �̊���l�����A�ʏ�͓��������������Ă��܂��B
	moveStretchPointsAt() �́AAutoCAD �� STRETCH[�X�g���b�`]�R�}���h�Ŏg�p���āA�w�肳�ꂽ�_���ړ����܂��B����́AtransformBy() �̊���l�����܂��B
	moveGripPointsAt() �́AAutoCAD �O���b�v�ҏW�Ŏg�p���āA�w�肳�ꂽ�_���ړ����܂��B����́AtransformBy() �̊���l�����܂��B
	worldDraw() �́A�G���e�B�e�B�̕\���Ɉˑ����Ȃ��W�I���g���b�N�\�����쐬���܂��B
	viewportDraw() �́A�G���e�B�e�B�̕\���Ɉˑ�����W�I���g���b�N�\�����쐬���܂��B
	draw() �́A�G���e�B�e�B�ƃL���[���̂��ׂĂ̂��̂��`�����悤�ɁA�G���e�B�e�B���L���[�ɓ���ăO���t�B�b�N �L���[���t���b�V�����܂��B
	list() �� AutoCAD �� LIST[�I�u�W�F�N�g���]�R�}���h�Ŏg�p����AacutPrintf() �����쐬���܂��B
	getGeomExtents() �́A�G���e�B�e�B�� 3D �\���͈͂��͂ޒ����̂̃R�[�i�[�_��Ԃ��܂��B
	explode() �̓G���e�B�e�B�𕪉����āA�P���ȗv�f�̃Z�b�g�ɂ��܂��B
	getSubentPathsAtGsMarker() �́AGS �}�[�J�[�ƑΉ�����T�u�G���e�B�e�B �p�X��Ԃ��܂�(GS �}�[�J�[�ƃT�u�G���e�B�e�B���Q��)�B
	getGsMarkersAtSubentPath() �́A�T�u�G���e�B�e�B �p�X�ɑΉ����� GS �}�[�J�[��Ԃ��܂��B
	subentPtr() �́A�Ή�����T�u�G���e�B�e�B �p�X��Ԃ��܂��B
	highlight() �́A�w�肳�ꂽ�T�u�G���e�B�e�B���n�C���C�g�\�����܂� (GS �}�[�J�[�ƃT�u�G���e�B�e�B���Q��)�B

���I�u�W�F�N�g �X�i�b�v �|�C���g
	�I�u�W�F�N�g�ɂ́A���S�_�A���_�A�[�_�Ȃǂ̓��L�̓_���`���邱�Ƃ��ł��܂��B
	AutoCAD ���X�i�b�v���[�h�œ_���擾���Ă���ꍇ�A
	�w�肳�ꂽ�I�u�W�F�N�g �X�i�b�v ���[�h�Ɋ֘A����X�i�b�v�_���擾���邽�߂� 
	getOsnapPoints()�֐����Ăяo���܂��B

	�I�u�W�F�N�g�X�i�b�v ���[�h
	���[�h      ������
	----------------------------------
	kOsModeEnd  ���[�_
	kOsModeMid  �����_
	kOsModeCen  �����S
	kOsModeNode ���_
	kOsModeQuad ���l���~�_
	kOsModeIns  ���}����_
	kOsModePerp ������
	kOsModeTan  ���ڐ�
	kOsModeNear ���ߐړ_

���ϊ��֐�
	AcDbEntity �N���X�́A���� 2 �̕ϊ��֐���񋟂��܂��B
	�EtransformBy() �֐�
		�w�肳�ꂽ�}�g���b�N�X���g�p���ăG���e�B�e�B���C�����܂��B
		AutoCAD �ł́A�O���b�v�ł̈ړ��A��]�A�ړx�ύX�A����ы������̊e���[�h�ɂ��Ăяo����܂��B
	�EgetTransformedCopy() �֐�
		�쐬�����G���e�B�e�B�����̃G���e�B�e�B�Ƃ͕ʂ̃N���X�̃C���X�^���X���쐬�ł���悤�ɂ��܂�

	�E�ړx�̈�v���Ȃ��u���b�N�Q�Ƃ𕪉�����ƁA�u���b�N�Q�Ƃ̒��̃G���e�B�e�B�� getTransformedCopy() �֐����Ăяo����A
	  �V�����G���e�B�e�B���쐬���܂� (�G���e�B�e�B�̕������Q��)�B

����_
	�EintersectWith() �֐�
		�}�ʂ̒��ŁA����G���e�B�e�B���ʂ̃G���e�B�e�B�ƌ�������_��Ԃ��܂��B
		���̊֐��ւ̓��͒l�̓G���e�B�e�B�ƌ����^�C�v�ŁA���̂����ꂩ�ł��B

		�EkOnBothOperands (�ǂ���̃G���e�B�e�B���������Ȃ�)
		�EkExtendThis 
		�EkExtendArg 
		�EkExtendBoth 

		��G���̐}�̂悤�ɁA�}�ʂ� 3 �{�̐�����������Ă���Ƃ��܂��B
		Line 1 ���u��ƂȂ�����v��Line 3 �������G���e�B�e�B�ł��B

		�����^�C�v�� kExtendThis �̏ꍇ�A
			���� 1 �����������Ƃ��ɐ��� 1 (�u��ƂȂ�����v) �Ɛ��� 3 ����������_�Ƃ��āA�_ A ���Ԃ���܂��B

		�����^�C�v�� kExtendArgument �Ő��� 2 �������G���e�B�e�B�̏ꍇ�A
			���� 2 ���������Ă����� 1 �ƌ����Ȃ��̂ŁA�f�[�^�͕Ԃ���܂���B

		�����^�C�v�� kExtendBoth �ŁA���� 2 �������G���e�B�e�B�̏ꍇ�́A
			�_ B ���Ԃ���܂��B
		�����^�C�v�� kExtendNone �Ő��� 2 �������G���e�B�e�B�̏ꍇ�́A
			�f�[�^�͕Ԃ���܂���B

			              ��
			              ��
			      �EB     �EA
			    �^        ��
			  �^  ��      ��
			�^    ��      ��
			Line1 ��      ��
			      Line2   ��Line3


	intersectWith() �֐��́A2 �̏��������I�[�o�[���[�h���ꂽ�֐��ł��B
	2 �Ԗڂ� �����ł͂���ɕʂ̈������g�p���܂����A���̈����� 2 �̃G���e�B�e�B�̉��z��_�����肷�邽�߂̓��e�ʂł��B

	virtual Acad::ErrorStatus AcDbEntity::intersectWith(
	    const AcDbEntity* ent,
	    AcDb::Intersect   intType,
	    AcGePoint3dArray& points,
	    int               thisGsMarker = 0,
	    int               otherGsMarker = 0) const;
	 

	virtual Acad::ErrorStatus AcDbEntity::intersectWith(
	    const AcDbEntity* ent,
	    AcDb::Intersect   intType,
	    const AcGePlane&  projPlane,
	    AcGePoint3dArray& points,
	    int               thisGsMarker = 0,
	    int               otherGsMarker = 0) const;

	�Ԃ����_�͏�ɃG���e�B�e�B (�u��ƂȂ�����v) ��ɂ���܂��B
	���������ĉ��z��_�̏ꍇ�́A���������_�́A�Ԃ����O�ɃG���e�B�e�B�ɓ��e����܂��B

	�ǂ���̏����� intersectWith() �ł��A���̊֐��̃p�t�H�[�}���X���œK�����邽�߂ɃI�v�V������ GS �}�[�J�[���g�p�ł��܂��B
	���̃G���e�B�e�B�� intersectWith() �֐��� GS �}�[�J�[���g�p���Ď��������ꍇ�A
	GS �}�[�J�[�ɂ���āA�����̈�̈ʒu����肵�ăe�X�g�̑��x���グ�邱�Ƃ��ł��܂��B
	���Ƃ��Ύ��̐}�ʂŁA���[�U���|���S���� 1 �ӂ�I�����āA���̕ӂɂ��Ă� GS �}�[�J�[��n���ƁA
	�|���S���̑��� 5 �ӂ��e�X�g����K�v���Ȃ��Ȃ�܂��B


		     �^�_
		   �^    �_�^    
		 �^      �^�_�����̌�_��I�������ꍇ 
		��     �^    �_
		��   �     ��
		��   ����     ��
		��            ��
		����������������

��GS(�O���t�B�b�N�X �V�X�e��) �}�[�J�[�ƃT�u�G���e�B�e�B
	�E�X�i�b�v�}�[�J�[

���T�u�G���e�B�e�B �p�X
�T�u�G���e�B�e�B �p�X�́A�}�ʂ̓���G���e�B�e�B�̒��ɂ���T�u�G���e�B�e�B�����ʂ��邽�߂̃p�X�ŁA
	�������O�̂��̂������Ă͂Ȃ�܂���B
���̃N���X AcDbFullSubentPath �̃p�X�́A
	�E�I�u�W�F�N�g ID �̔z�� 1 ��
	�E�T�u�G���e�B�e�B ID �I�u�W�F�N�g 1 �łł��Ă��܂��B
		{AcDbObjectIdArray  mObjectIds;
		 AcDbSubentId       mSubentId;
		}

�z��ɂ́A�u���C���v�G���e�B�e�B�ւ̃p�X���w�肷��I�u�W�F�N�g ID ���܂܂�Ă��܂��B
���Ƃ��΃u���b�N�Q�Ƃ��A���ꂼ��^�C�v�� AcDb3dSolid 2 �̒����̂��܂�ł���Ƃ��܂��B
�I�u�W�F�N�g ID �z��ɂ� 2 �̃G���e�B�e�B
(�u���b�N�Q�Ƃ� ID �ƁA���̌�Ƀ��C�� �G���e�B�e�B�� ID[InsertID, SolidID]) ���܂܂�Ă��܂��B

AcDbFullSubentPath �� 2 �Ԗڂ̗v�f�� AcDbSubentId �I�u�W�F�N�g�ŁA
����̓��X�g���ɃT�u�G���e�B�e�B �^�C�v (���_�A�G�b�W�A��) �ƃT�u�G���e�B�e�B�̍����������Ă��܂��B
�����o �f�[�^�ɃA�N�Z�X����ɂ́AAcDbSubentId �֐��� type() �� index() ���g�p���܂��B

�O�̗���g���ƁAsolid1 �� 2 �Ԗڂ̃G�b�W�� AcDbFullSubentPath �͎��̂悤�ɂȂ�܂��B
{(InsertID, solid1ID)
 (kEdgeSubentType, 2)};
�\���b�h�݂̂�����ꍇ�AAcDbFullSubentPath �́A�\���b�h�̍ŏ��̖ʂł͎��̂悤�ɂȂ�܂��B


���ȒP�ȃn�C���C�g�\���̗�
	�E�T�u�G���e�B�e�B���n�C���C�g�\������ɂ�
	1.�I�����X�g����A�I�����ꂽ�G���e�B�e�B�� GS �}�[�J�[���擾�B
	2.getSubentPathsAtGsMarker() �֐����g�p���āA�T�u�G���e�B�e�B �p�X�ɕϊ�����G���e�B�e�B �N���X�� GS �}�[�J�[��n���܂��B
	  ��]�̃T�u�G���e�B�e�B �^�C�v (���_�A�G�b�W�A��) ���w�肵�Ă��������B
	3.�I�������T�u�G���e�B�e�B�ւ̃p�X���ł�����A�������T�u�G���e�B�e�B�p�X�œn����
	  highlight() �֐����Ăяo����悤�ɂȂ�܂��B


���G���e�B�e�B�̑I��
 	�I�����邽�߂ɂ́A�O���[�o���֐���g�ݍ��킹�Ďg�p���܂��B
	�܂�acedSSGet() �֐����g�p���đI���Z�b�g���擾���܂��B
	���� acedSSNameX() �֐����g�p���āA�I�����ꂽ�G���e�B�e�B�̂��߂̃T�u�G���e�B�e�B GS �}�[�J�[���擾���܂��B
	int acedSSGet(
	    const ACHAR * str,
	    const void * pt1,
	    const void * pt2,
	    const struct resbuf * filter,
	    ads_name ss);
	 
	int acedSSNameX(
	    struct resbuf ** rbpp,
	    const ads_name ss,
	    const long i);

��GS �}�[�J�[�̃T�u�G���e�B�e�B �p�X�ւ̕ϊ�
	getSubentPathsAtGsMarker() �֐����g�p���āAacedSSNameX() �ɂ��Ԃ����
	GS �}�[�J�[�̂��߂̃T�u�G���e�B�e�B���擾���܂��B���̊֐��̊��S�ȍ\���͎��̂Ƃ���ł��B

	virtual Acad::ErrorStatus AcDbEntity::getSubentPathsAtGsMarker(
	    AcDb::SubentType type,
	    int gsMark,
	    const AcGePoint3d& pickPoint,
	    const AcGeMatrix3d& viewXform,
	    int& numPaths,
	    AcDbFullSubentPath*& subentPaths
	    int numInserts = 0,
	    AcDbObjectId* entAndInsertStack = NULL) const;

	���̊֐��ւ̍ŏ��̈����́A�ΏۂƂȂ�T�u�G���e�B�e�B �^�C�v(���_�A�G�b�W�A�܂��͖�)�ł��B
	�T�u�G���e�B�e�B�̃n�C���C�g�\���ɋL�ڂ����R�[�h��ł́A�Ή�����G�b�W���n�C���C�g�\�����悤�Ƃ��Ă��邽�߁A
	���̊֐��ւ̍ŏ��̌Ăяo���ł� kEdgeSubentType ���w�肳��Ă��܂��B
	getSubentPathsAtGsMarker() �֐��ւ� 2 �Ԗڂ̌Ăяo���ł́A
	�I�����ꂽ�T�u�G���e�B�e�B�Ɋ֘A����e�ʂ��n�C���C�g�\�����悤�Ƃ��Ă���̂ŁAkFaceSubentType ���w�肳��Ă��܂��B

	�ꕔ�̃G���e�B�e�B (�}���`���C���Ȃ�) �ŁAGS �}�[�J�[�����ł̓T�u�G���e�B�e�B�p�X��Ԃ����߂�
	�\���ȏ���񋟂ł��Ȃ��ꍇ�A�ǉ��̏��Ƃ��� pickPoint �� viewXform �������g���܂��B
	�T�u�G���e�B�e�B�̃n�C���C�g�\���ɋL�ڂ����R�[�h��ł͎g�p����Ă��܂���B

	numInserts �� entAndInsertStack �̈����́A�l�X�g���ꂽ�}���Ŏg�p���܂��B
	acedNEntSel() �� acedNEntSelP() �̊֐��́A�ǂ�������[�t ���x�� �G���e�B�e�B�ƁA�}���̃X�^�b�N��Ԃ��܂��B

���T�u�G���e�B�e�B�̃n�C���C�g�\��
	���Ƃ� highlight() �֐����Ăяo���ăT�u�G���e�B�e�B �p�X�ɓn���܂��B
	�������w�肹���� highlight() ���Ăяo���ƁA����l�ɂ��G���e�B�e�B�S�̂��n�C���C�g�\������܂��B

	���̃T���v�� �R�[�h����́A�G���e�B�e�B�̑I���A�T�u�G���e�B�e�B �p�X�̎擾�A
	����� GS �}�[�J�[�Ɗ֘A����قȂ�^�C�v�̃T�u�G���e�B�e�B�̃n�C���C�g�\�����s���菇�������Ă��܂��B
	�܂��A���̑��֗̕��ȃT�u�G���e�B�e�B�֐��������Ă��܂��B

	virtual AcDbEntity* 
	AcDbEntity::subentPtr(const AcDbFullSubentPath& id) const;

	���̊֐��́A�w�肳�ꂽ�p�X�ɂ��L�q�����T�u�G���e�B�e�B�̃R�s�[�Ƀ|�C���^��Ԃ��܂��B
	����͂��̌�(��ɂ���悤��)�f�[�^�x�[�X�ɒǉ����邱�Ƃ��ł��܂��B

	��:AcDbEntity �̐V�����T�u�N���X���쐬����Ƃ��́A
	getSubentPathsAtGsMarker()�AgetGsMarkersAtSubentPath()�A����� subentPtr() ��
	���ꂼ��ɑΉ����鉼�z�֐� subGetSubentPathsAtGsMarker()�AsubGetGsMarkersAtSubentPath()�A����� subSubentPtr() ��
	�I�[�o�[���C�h���邱�Ƃɂ���āA�Ǝ��̎�����񋟂���K�v������܂�(AcDbEntity ����̔h�����Q��)�B
	
	������ highlight() �֐��� AcDbEntity ���x���Ŏ�������A�ʏ�͏㏑������K�v�͂���܂���B
	
	�������A�㏑�������ꍇ�A�V�����������ꂽ���̊֐��́A�n�C���C�g�\�����s�����߂� 
	AcDbEntity::highlight() ���Ăяo���Ȃ���΂Ȃ�܂���B

	// This function calls getObjectAndGsMarker() to get the
	// object ID of a solid and its gsmarker. It then calls
	// highlightEdge(), highlightFaces(), and highlightAll() to
	// highlight the selected edge, all faces surrounding that
	// edge, and then the whole solid.
	//
	void highlightTest() {
	    AcDbObjectId objId;
	    int marker;
	    if (getObjectAndGsMarker(objId, marker) != Acad::eOk)
	        return;
	    highlightEdge(objId, marker);
	    highlightFaces(objId, marker);
	    highlightAll(objId);
	}
	// This function uses acedSSGet() to let the user select a
	// single entity.  It then passes this selection set to
	// acedSSNameX() to get the gsmarker. Finally, the entity name
	// in the selection set is used to obtain the object ID of
	// the selected entity.
	//
	Acad::ErrorStatus getObjectAndGsMarker(AcDbObjectId& objId, int& marker) {
	    ads_name sset;
	    if (acedSSGet(_T("_:S"), NULL, NULL, NULL, sset) != RTNORM) {
	        acutPrintf(_T("\nacedSSGet has failed"));
	        return Acad::eInvalidAdsName;
	    }

	    // Get the entity from the selection set and its
	    // subentity ID. This code assumes that the user
	    // selected only one item, a solid.
	    //
	    struct resbuf *pRb;
	    if (acedSSNameX(&pRb, sset, 0) != RTNORM) {
	        acedSSFree(sset);
	        return Acad::eAmbiguousOutput;
	    }
	    acedSSFree(sset);

	    // Walk the list to the third item, which is the selected
	    // entity's entity name.
	    //
	    struct resbuf *pTemp;
	    int i;
	    for (i=1, pTemp = pRb;i<3;i++, pTemp = pTemp->rbnext)
	        { ; }
	    ads_name ename;
	    ads_name_set(pTemp->resval.rlname, ename);

	    // Move on to the fourth list element, which is the gsmarker.
	    //
	    pTemp = pTemp->rbnext;
	    marker = pTemp->resval.rint;
	    acutRelRb(pRb);
	    acdbGetObjectId(objId, ename);
	    return Acad::eOk;
	}

	// This function accepts an object ID and a gsmarker.
	// The object is opened, the gsmarker is used to get the
	// AcDbFullSubentIdPath, which is then used to highlight
	// and unhighlight the edge used to select the object.
	// Next, the object's subentPtr() function is used to get
	// a copy of the edge. This copy is then added to the
	// database. Finally, the object is closed.
	// 
	// Since the copy of the subentity was added to the database 
	// as a new AcDbLine entity, it remains visible in the drawing 
	// editor after the command exits and will be reported by the 
	// AutoCAD LIST command.
	// 
	void highlightEdge(const AcDbObjectId& objId, const int marker) {
	    TCHAR dummy[133]; // space for acedGetString pauses below
	    AcDbEntity *pEnt;
	    acdbOpenAcDbEntity(pEnt, objId, AcDb::kForRead);

	    // Get the subentity ID for the edge that is picked
	    //
	    AcGePoint3d pickpnt;
	    AcGeMatrix3d xform;
	    int numIds;
	    AcDbFullSubentPath *subentIds;
	    pEnt->getSubentPathsAtGsMarker(AcDb::kEdgeSubentType, marker, pickpnt, xform, numIds, subentIds);

	    // At this point the subentId's variable contains the
	    // address of an array of AcDbFullSubentPath objects.
	    // The array should be one element long, so the picked
	    // edge's AcDbFullSubentPath is in subentIds[0].
	    //
	    // For objects with no edges (such as a sphere), the
	    // code to highlight an edge is meaningless and must
	    // be skipped.
	    //
	    if (numIds > 0) {
	        // Highlight the edge.
	        //
	        pEnt->highlight(subentIds[0]);
	        // Pause to let user see the effect.
	        //
	        acedGetString(0, _T("\npress <RETURN> to continue..."), dummy);

	        // Unhighlight the picked edge.
	        //
	        pEnt->unhighlight(subentIds[0]);

	        // Get a copy of the edge, and add it to the database.
	        //
	        AcDbEntity *pEntCpy = pEnt->subentPtr(subentIds[0]);
	        AcDbObjectId objId;
	        addToModelSpace(objId, pEntCpy);
	    }
	    delete []subentIds;
	    pEnt->close();
	}

	// This function accepts an object ID and a gsmarker.
	// The object is opened, the gsmarker is used to get the
	// AcDbFullSubentIdPath, which is then used to highlight
	// and unhighlight faces that share the edge used to
	// select the object. The object is then closed.
	//
	void highlightFaces(const AcDbObjectId& objId, const int marker) {
	    TCHAR dummy[133];
	    AcDbEntity *pEnt;
	    acdbOpenAcDbEntity(pEnt, objId, AcDb::kForRead);

	    // Get the subentIds for the faces.
	    //
	    AcGePoint3d pickpnt;
	    AcGeMatrix3d xform;
	    int numIds;
	    AcDbFullSubentPath *subentIds;
	    pEnt->getSubentPathsAtGsMarker(AcDb::kFaceSubentType, marker, pickpnt, xform, numIds, subentIds);

	    // Walk the subentIds list, highlighting each face subentity.
	    //
	    for (int i = 0;i < numIds; i++) {
	        pEnt->highlight(subentIds[i]); // Highlight face.
	        // Pause to let the user see the effect.
	        //
	        acedGetString(0, _T("\npress <RETURN> to continue..."), dummy);
	        pEnt->unhighlight(subentIds[i]);
	    }
	    delete []subentIds;
	    pEnt->close();
	}

	// This function accepts an object ID. The object is opened,
	// and its highlight() and unhighlight() functions are
	// used with no parameters, to highlight and
	// unhighlight the edge used to select the object. The
	// object is then closed.
	//
	void highlightAll(const AcDbObjectId& objId) {
	    TCHAR dummy[133];
	    AcDbEntity *pEnt;
	    acdbOpenAcDbEntity(pEnt, objId, AcDb::kForRead);

	    // Highlight the whole solid.
	    //
	    pEnt->highlight();

	    // Pause to let user see the effect.
	    //
	    acedGetString(0, _T("\npress <RETURN> to continue..."), dummy);
	    pEnt->unhighlight();
	    pEnt->close();
	}

	Acad::ErrorStatus addToModelSpace(AcDbObjectId &objId, AcDbEntity* pEntity) {
	    AcDbBlockTable *pBlockTable;
	    AcDbBlockTableRecord *pSpaceRecord;
	    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pBlockTable, AcDb::kForRead);
	    pBlockTable->getAt(ACDB_MODEL_SPACE, pSpaceRecord, AcDb::kForWrite);
	    pSpaceRecord->appendAcDbEntity(objId, pEntity);
	    pBlockTable->close();
	    pEntity->close();
	    pSpaceRecord->close();
	    return Acad::eOk;
	}

���l�X�g���ꂽ�u���b�N�Q�Ƃ̃n�C���C�g�\��

���G���e�B�e�B�̕���
	�Eexplode() �֐��́AAcDbEntity ����h�������I�u�W�F�N�g�̔z����쐬���܂��B

�����ߎړx
	����̃G���e�B�e�B�́A�y�[�p�[��ԂŒ�`���ꂽ���ߖړI�Ŏg�p�����I�u�W�F�N�g�̖������ʂ����܂��B
	�ȉ��̃I�u�W�F�N�g�ɂ́A���߃T�|�[�g�����Ă��܂��B
		����
		�}���`�e�L�X�g
		���@
		���o��
		�o���[��
		���e��
		�e�[�u��
		�u���b�N
		����
		�n�b�`���O
���َړx�Ή��I�u�W�F�N�g�̓Ǝ��֐�
���َړx�Ή��I�u�W�F�N�g�̃T���v���̍쐬
���I�u�W�F�N�g �R���e�L�X�g
	���ۊ�{�N���X AcDbObjectContext ����h�������I�u�W�F�N�g�́A
	�I�u�W�F�N�g�̓���ɉe�����y�ڂ�����̃R���e�L�X�g(���̏ꍇ�͒��ߎړx)��\�����Ƃ��ł��܂��B
	�A�v���P�[�V������ AcDbObjectContextCollection ���������āA
	�J�X�^�� �I�u�W�F�N�g �R���e�L�X�g���`���܂��B
	�܂��A�A�v���P�[�V�����͂��̃C���X�^���X������ AcDbObjectContextCollectionManager �ɓo�^����K�v������܂��B

	���݂̃R���e�L�X�g�́AAcDbContextColleciton::setCurrentContext()���Ăяo�����ƂŐݒ�ł��܂��B
	�R���N�V�����ƘA�������邽�߁A�K�� AcDbContextCollectionIterator �I�u�W�F�N�g���쐬���Ă��������B

��AutoCAD �G���e�B�e�B�̃C���X�^���X�쐬
���P���ȃG���e�B�e�B�̍쐬
//�������쐬���ă��f����ԃu���b�N �e�[�u�� ���R�[�h�ɒǉ�����R�[�h�ł��B
AcDbObjectId createLine() {
    AcGePoint3d startPt(4.0, 2.0, 0.0);
    AcGePoint3d endPt(10.0, 7.0, 0.0);
    AcDbLine *pLine = new AcDbLine(startPt, endPt);
    AcDbBlockTable *pBlockTable;
    acdbHostApplicationServices()->workingDatabase()
        ->getSymbolTable(pBlockTable, AcDb::kForRead);
    AcDbBlockTableRecord *pBlockTableRecord;
    pBlockTable->getAt(ACDB_MODEL_SPACE, pBlockTableRecord,
        AcDb::kForWrite);
    pBlockTable->close();
    AcDbObjectId lineId;
    pBlockTableRecord->appendAcDbEntity(lineId, pLine);
    pBlockTableRecord->close();
    pLine->close();
    return lineId;
}
���P���ȃu���b�N �e�[�u�� ���R�[�h�̍쐬
//�V�����u���b�N �e�[�u�� ���R�[�h���쐬���ău���b�N �e�[�u���ɒǉ�����R�[�h�ł��B
//���̃R�[�h�͂���ɁA�������쐬���ĐV�����u���b�N �e�[�u�� ���R�[�h�ɒǉ����܂��B
void makeABlock() {
     // Create and name a new block table record.
     AcDbBlockTableRecord *pBlockTableRec = new AcDbBlockTableRecord();
     pBlockTableRec->setName(_T("ASDK-NO-ATTR"));

     // Get the block table.
     AcDbBlockTable *pBlockTable = NULL;
     acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pBlockTable, AcDb::kForWrite);

     // Add the new block table record to the block table.
     AcDbObjectId blockTableRecordId;
     pBlockTable->add(blockTableRecordId, pBlockTableRec);
     pBlockTable->close();

     // Create and add a line entity to the component's
     // block record.
     AcDbLine *pLine = new AcDbLine();
     AcDbObjectId lineId;
     pLine->setStartPoint(AcGePoint3d(3, 3, 0));
     pLine->setEndPoint(AcGePoint3d(6, 6, 0));
     pLine->setColorIndex(3);
     pBlockTableRec->appendAcDbEntity(lineId, pLine);
     pLine->close();
     pBlockTableRec->close();
}

��������`�t���̃u���b�N �e�[�u�� ���R�[�h�̍쐬
�������t���̃u���b�N�Q�Ƃ̍쐬
���u���b�N �e�[�u�� ���R�[�h�̃C�e���C�g(����)
// �u���b�N �e�[�u�� ���R�[�h�̒��ɂ���v�f���C�e���C�g (����) ���āA���̗v�f���o�͂�����@�������Ă��܂��B

printAll() �֐��͓ǂݍ��݂̂��߂Ƀu���b�N �e�[�u�����I�[�v�����A���Ƀ��[�U���w�肵���u���b�N�����I�[�v�����܂��B
�V�����C�e���^���u���b�N �e�[�u�� ���R�[�h�����ړ����܂��B
���R�[�h�̒��ɃG���e�B�e�B���܂܂�Ă���ꍇ�́A�C�e���^�͂��̃G���e�B�e�B�ɂ��Ẵ��b�Z�[�W���o�͂��܂��B

void printAll() {
    int rc;
    TCHAR blkName[50];
    rc = acedGetString(Adesk::kTrue, _T("Enter Block Name <CR for current space>: "), blkName);
    if (rc != RTNORM)
        return;
    if (blkName[0] == _T('\0')) {
        if (acdbHostApplicationServices()->workingDatabase()->tilemode() == Adesk::kFalse) {
            struct resbuf rb;
            acedGetVar(_T("cvport"), &rb);
            if (rb.resval.rint == 1) {
                _tcscpy(blkName, ACDB_PAPER_SPACE);
            } else {
                _tcscpy(blkName, ACDB_MODEL_SPACE);
            }
        } else {
            _tcscpy(blkName, ACDB_MODEL_SPACE);
        }
    }
    AcDbBlockTable *pBlockTable;
    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pBlockTable, AcDb::kForRead);
    AcDbBlockTableRecord *pBlockTableRecord;
    pBlockTable->getAt(blkName, pBlockTableRecord, AcDb::kForRead);
    pBlockTable->close();
    AcDbBlockTableRecordIterator *pBlockIterator;
    pBlockTableRecord->newIterator(pBlockIterator);
    for (; !pBlockIterator->done();
        pBlockIterator->step())
    {
        AcDbEntity *pEntity;
        pBlockIterator->getEntity(pEntity, AcDb::kForRead);
        AcDbHandle objHandle;
        pEntity->getAcDbHandle(objHandle);
        TCHAR handleStr[20];
        objHandle.getIntoAsciiBuffer(handleStr);
        const TCHAR *pCname = pEntity->isA()->name();
        acutPrintf(_T("Object Id %lx, handle %s, class %s.\n"), pEntity->objectId(), handleStr, pCname);
        pEntity->close();
    }
    delete pBlockIterator;
    pBlockTableRecord->close();
    acutPrintf(_T("\n"));
}

�������G���e�B�e�B
�������G���e�B�e�B�̍쐬
���̗�ł́AAcDb2dPolyline �I�u�W�F�N�g���쐬���āA
�I�u�W�F�N�g�̃v���p�e�B (��w�A�J���[ �C���f�b�N�X�A"����"�p�����[�^) ���������ݒ肷����@�������Ă��܂��B
���� 4 �̒��_�I�u�W�F�N�g (AcDb2dPolylineVertex) ���쐬���A

���̈ʒu��ݒ肵�A�|�����C�� �I�u�W�F�N�g�ɒǉ����܂��B

�Ō�ɁA�I�[�v�����Ă���I�u�W�F�N�g (���_�A�|�����C���A�u���b�N �e�[�u�� ���R�[�h�A�u���b�N �e�[�u��) �����ׂăN���[�Y���܂��B

�|�����C�� �I�u�W�F�N�g���N���[�Y����ƁAAutoCAD �͎����I�ɂ����� AcDbSequenceEnd �I�u�W�F�N�g��ǉ����܂��B

void createPolyline() {
    // Set four vertex locations for the pline.
    AcGePoint3dArray ptArr;
    ptArr.setLogicalLength(4);
    for (int i = 0; i < 4; i++) {
        ptArr[i].set((double)(i/2), (double)(i%2), 0.0);
    }

    // Dynamically allocate an AcDb2dPolyline object,
    // given four vertex elements whose locations are supplied
    // in ptArr.  The polyline has no elevation, and is
    // explicitly set as closed.  The polyline is simple;
    // that is, not curve fit or a spline.  By default, the
    // widths are all 0.0 and there are no bulge factors.
    AcDb2dPolyline *pNewPline = new AcDb2dPolyline(AcDb::k2dSimplePoly, ptArr, 0.0, Adesk::kTrue);
    pNewPline->setColorIndex(3);

    // Get a pointer to a block table object.
    AcDbBlockTable *pBlockTable;
    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pBlockTable, AcDb::kForRead);

    // Get a pointer to the MODEL_SPACE BlockTableRecord.
    AcDbBlockTableRecord *pBlockTableRecord;
    pBlockTable->getAt(ACDB_MODEL_SPACE, pBlockTableRecord, AcDb::kForWrite);
    pBlockTable->close();

    // Append the pline object to the database and
    // obtain its object ID.
    AcDbObjectId plineObjId;
    pBlockTableRecord->appendAcDbEntity(plineObjId, pNewPline);
    pBlockTableRecord->close();

    // Make the pline object reside on layer "0".
    pNewPline->setLayer(_T("0"));
    pNewPline->close();
}

���|�����C���̒��_�̃C�e���C�g(����)

���̗�ł́A���_�C�e���^���g�p���ă|�����C���̒��_���C�e���C�g (����) ���܂��B
���Ɋe���_�̍��W���o�͂��܂��B
// a vertex iterator. It then iterates through the vertices,
// printing out the vertex location.
// 
void iterate(AcDbObjectId plineId) {
    AcDb2dPolyline *pPline;
    acdbOpenObject(pPline, plineId, AcDb::kForRead);
    AcDbObjectIterator *pVertIter= pPline->vertexIterator();
    pPline->close();  // Finished with the pline header.
    AcDb2dVertex *pVertex;
    AcGePoint3d location;
    AcDbObjectId vertexObjId;
    for (int vertexNumber = 0; !pVertIter->done(); vertexNumber++, pVertIter->step()) {
        vertexObjId = pVertIter->objectId();
        acdbOpenObject(pVertex, vertexObjId, AcDb::kForRead);
        location = pVertex->position();
        pVertex->close();
        acutPrintf(_T("\nVertex #%d's location is : %0.3f, %0.3f, %0.3f"), 
        	vertexNumber, location[X], location[Y], location[Z]);
    }
    delete pVertIter;
}

�������G���e�B�e�B�̍폜
AcDb2dPolyline �̃T�u�G���e�B�e�B�̍폜���@�������܂��B
	void delete2dPoly(AcDb2dPolyline* pPline) { 
	  AcDbObjectIterator* pIter=pPline->vertexIterator();
	  AcDbEntity* pEnt; 
	  for (; !pIter->done(); )
	    {
	      pEnt=pIter->entity(); 
	      // Must step the iterator first so that it is no longer 
	      // sitting on the entity that's about to be deleted.
	      pIter->step();
	      delete pEnt;
	    }
	  delete pIter;
	  delete pPline;
	}

�����W�n�̃A�N�Z�X
���G���e�B�e�B���W�n
	�Ǝ��̃G���e�B�e�B���`�����ꍇ�A�W�I���g���b�N�\�� (�_�A�p�x�A�x�N�g��) ��
	���̃G���e�B�e�B�̑��΍��W�n�ŕۑ����Ă����ƕ֗��ł��B
	���Ƃ��΁A�~�ʂ́AZ �����~�ʂ̕��ʂƐ����ɂȂ�悤�ȍ��W�n���m�����܂��B
	�~�ʂ̒��S�_�̓��[���h���W�n�ŕԂ���܂����A�J�n�p�x�ƏI�_�ł̊p�x�͂��̉~�ʂ̃G���e�B�e�B���W�n (ECS) �ł����ϊ��ł��܂���B
	���̂悤�ȏꍇ�́AgetEcs() �֐����������邱�Ƃɂ���āA
	���̃G���e�B�e�B��ϊ�����̂Ɏg���}�g���b�N�X���A�G���e�B�e�B���W�n���烏�[���h���W�n�ɕԂ��Ă��������B
	�G���e�B�e�B���A���g�̃G���e�B�e�B���W�n�Œ�`����Ă��Ȃ��ꍇ�́AgetEcs() �֐��͒P�ʃ}�g���b�N�X��Ԃ��܂��B
	����������΁A�G���e�B�e�B�� getEcs() �֐����P�ʃ}�g���b�N�X��Ԃ����Ƃ��́A
	���̃G���e�B�e�B�����[���h���W�Œ�`����Ă��邱�Ƃ��킩��܂��B

	AutoCAD �ł́A���ʐ}�`�� ECS (�G���e�B�e�B���W�n) ������܂����A3D �G���e�B�e�B�ɂ͂���܂���B
	getEcs() �֐�����P�ʃ}�g���b�N�X��Ԃ����Ƃ����� AutoCAD �G���e�B�e�B�͈ȉ��̂��̂ł��B
��AcDb2dVertex �N���X
	AcDb2dPolyline �ɂ́A���x�ƁA�N���X AcDb2dVertex �� X,Y �_�̘A��������܂��B
	AcDb2dVertex �� position() �� setPosition() �֐��́A3D �ʒu�� ECS (�G���e�B�e�B���W�n) �Ŏw�肵�܂��B
	setPosition() �ɓn���ꂽ Z ���W�̓G���e�B�e�B�ɕۑ�����Aposition() �֐��ɂ���ĕԂ���܂����A����ȊO�ł͖�������܂��B
	����̓|�����C���̍��x�ɂ͉e�����܂���B

	AcDb2dPolyline �N���X�� vertexPosition() �֐���񋟂��A���̊֐��́A�n���ꂽ���_�̃��[���h���W�n�̒l��Ԃ��܂��B
	�|�����C���̍��x��ς���ɂ́AAcDb2dPolyline::setElevation() �֐����g�����@��������܂���B

���Ȑ��֐�
���ۊ�{�N���X AcDbCurve �ɂ́A�Ȑ��𑀍삷�邽�߂̊֐�����������܂��B
����ɂ͋Ȑ��̓��e�p�A�����p�A�I�t�Z�b�g�p�̊֐��̑��A�Ȑ��p�����[�^���Ɖ�邽�߂̊֐��ꎮ���܂܂�܂��B
�Ȑ��̓p�����[�^��Ԃł��f�J���g���W��Ԃł���`�ł��܂��B
3D �Ȑ��� 1 �̃p�����[�^ (f(t)) �̊֐��ł����A3D �T�[�t�F�X�� 2 �̃p�����[�^ (f(u,v)) �̊֐��ł��B
�ϊ��֐����g���ƁA�f�[�^���p�����[�^�\������f�J���g���W�n�̓_�ɕϊ��ł��܂��B
���Ƃ��΃X�v���C���́A�p�����[�^��Ԃōł��ǂ��\���ł��܂��B
�X�v���C���𓯂� 3 �̕����ɕ�������ɂ́A���̃X�v���C���̓_�ɑΉ�����p�����[�^���܂������Ă���A
�p�����[�^��Ԃł��̃X�v���C���𑀍삵�Ă��������B
�Ȑ��́A3D �G���e�B�e�B�̍쐬�ŁA�g�������E�A�g�����E�A�\���I�u�W�F�N�g�Ƃ��Ďg�p�ł��܂��B

���̗�̂悤�ɁA��������̖ʂɋȐ��𓊉e���邱�Ƃ��ł��܂��B
// Accepts an ellipse object ID, opens the ellipse, and uses
// its getOrthoProjectedCurve member function to create a
// new ellipse that is the result of a projection onto the
// plane with normal <1,1,1>.  The resulting ellipse is
// added to the model space block table record.
//
void projectEllipse(AcDbObjectId ellipseId) {
    AcDbEllipse *pEllipse;
    acdbOpenObject(pEllipse, ellipseId, AcDb::kForRead);
    // Now project the ellipse onto a plane with a
    // normal of <1, 1, 1>.
    //
    AcDbEllipse *pProjectedCurve;
    pEllipse->getOrthoProjectedCurve(AcGePlane(
        AcGePoint3d::kOrigin, AcGeVector3d(1, 1, 1)),
        (AcDbCurve*&)pProjectedCurve);
    pEllipse->close();
    AcDbObjectId newCurveId;
    addToModelSpace(newCurveId, pProjectedCurve);
}
// Accepts an ellipse object ID, opens the ellipse, and uses
// its getOffsetCurves() member function to create a new
// ellipse that is offset 0.5 drawing units from the
// original ellipse.
//
void offsetEllipse(AcDbObjectId ellipseId) {
    AcDbEllipse *pEllipse;
    acdbOpenObject(pEllipse, ellipseId, AcDb::kForRead);
    // Now generate an ellipse offset by 0.5 drawing units.
    //
    AcDbVoidPtrArray curves;
    pEllipse->getOffsetCurves(0.5, curves);
    pEllipse->close();
    AcDbObjectId newCurveId;
    addToModelSpace(newCurveId, (AcDbEntity*)curves[0]);
}


���R���e�i �I�u�W�F�N�g
�R���e�i �I�u�W�F�N�g�̎�ނɂ́A
	�V���{�� �e�[�u���A
	�f�B�N�V���i���A
	�O���[�v�A
	Xrecord 
������܂��B
AutoCAD �́A�}�ʂ̈ꕔ�Ƃ��ăV���{�� �e�[�u���̌Œ�Z�b�g�� Named Object Dictionary ���쐬���܂��B
����ɂ͑��� 2 �̃f�B�N�V���i�� (�}���`���C�� �X�^�C�� �f�B�N�V���i���A�O���[�v �f�B�N�V���i��) �������Ă��܂��B
���̃Z�N�V�����Ŏ��グ���ł́A�V���{�� �e�[�u���A�f�B�N�V���i���A�O���[�v�ɃG���e�B�e�B��ǉ�������A
�C�e���^���g�p���Ă����̃R���e�i�̓��e���Ɖ����@��������܂��B
���̑��A�A�v���P�[�V���� �f�[�^�ƃI�u�W�F�N�g���Ǘ����邽�߂ɓƎ��̃f�B�N�V���i���� Xrecord ���쐬������@���������܂��B

���V���{�� �e�[�u���ƃf�B�N�V���i���̔�r
�V���{�� �e�[�u���ƃf�B�N�V���i���̎�����̓����͓����ł��B
�ǂ�����A�e�L�X�g������L�[���g�p���ĉ{���ł���f�[�^�x�[�X �I�u�W�F�N�g�ł��鍀�ڂ��܂�ł��܂��B
�J���҂͂����̃R���e�i �I�u�W�F�N�g�ɍ��ڂ�ǉ�������A�C�e���^���g�p���č��ړ����ړ����Ă��̓��e���Ɖ����ł��܂��B

AutoCAD �f�[�^�x�[�X�ɂ͏�� 9 �̃V���{�� �e�[�u���̌Œ�Z�b�g�������Ă��܂��B
�V���{�� �e�[�u�����쐬�E�폜�ł��Ȃ����A���R�[�h�ƌĂ΂�鍀�ڂ̒ǉ��ƕύX�͂ł���B
�e�V���{�� �e�[�u���͓���� 1 �^�C�v�̃I�u�W�F�N�g�����܂݂܂���B
���Ƃ��� AcDbLayerTable �� AcDbLayerTableRecord �^�C�v�̃I�u�W�F�N�g�������܂݂܂��B

AutoCAD �f�[�^�x�[�X���V�����}�ʂ��쐬����Ƃ��́A�K�� Named Object Dictionary ���쐬����܂��B
Named Object Dictionary �́A�}�ʂ̒��̔�G���e�B�e�B �I�u�W�F�N�g�\���̎�ȁu�ڎ��v�Ƃ��ĎQ�Ƃł��܂��B
���̃f�B�N�V���i���ɂ́A����l�Ŏ��� 9 �̃t�H���_������܂��B
	GROUP �f�B�N�V���i���A
	MLINE �X�^�C�� �f�B�N�V���i���A
	���C�A�E�g �f�B�N�V���i���A
	����X�^�C�����f�B�N�V���i���A
	�F�f�B�N�V���i���A
	�ޗ��f�B�N�V���i���A
	����ݒ�f�B�N�V���i���A
	�\�X�^�C�� �f�B�N�V���i���A
	SYSVAR �f�B�N�V���i��
�ł��B
�D���Ȑ������I�u�W�F�N�g���쐬���āANamed Object Dictionary �ɒǉ����邱�Ƃ��ł��܂��B
�������ANamed Object Dictionary �ɒǉ�����I�u�W�F�N�g�� 1 �����ɂ��āA
����ɂ��̃I�u�W�F�N�g���A�v���P�[�V�����Ɋ֘A���鑼�̃I�u�W�F�N�g�����L����悤�ȏK���ɂ���̂��őP�̍�ł��傤�B
��ʂɁA���L���鑤�̃I�u�W�F�N�g�̓f�B�N�V���i���Ȃǂ̃R���e�i �N���X�̃I�u�W�F�N�g�ł��B
���̃N���X�̖��O�ɂ́A4 �����œo�^����Ă��鎩���̊J���҃V���{�����g�p���Ă��������B

AcDbDictionary �ɂ́A���̃f�B�N�V���i�����܂ށA�ǂ�ȃ^�C�v�� AcDbObject �ł��ێ����邱�Ƃ��ł��܂��B
�f�B�N�V���i�� �I�u�W�F�N�g�́A���ڂ̃^�C�v �`�F�b�N�͍s���܂���B
�������A�}���`���C�� �X�^�C�� �f�B�N�V���i���ɂ̓N���X AcDbMlineStyle �̃C���X�^���X�݂̂�}����
�A�O���[�v �f�B�N�V���i���ɂ� AcDbGroup �̃C���X�^���X�݂̂�}�����Ȃ���΂Ȃ�܂���B
�A�v���P�[�V�������쐬�ƃ����e�i���X���s���f�B�N�V���i�����̍��ڂ́A����̃^�C�v�ł���K�v������܂��B
�V���{�� �e�[�u���A�V���{�� �e�[�u�� ���R�[�h�A�f�B�N�V���i���A�C�e���^�̃N���X�K�w�́A���̂Ƃ���ł��B

�EAcDbObject
	�EAcDbSymbolTable
		�EAcDbAbstractViewTable
			�EAcDbViewportTable
			�EAcDbViewTable
		�EAcDbBlockTable
		�EAcDbDimStyleTable
		�EAcDbLayerTable
		�EAcDbLinetypeTable
		�EAcDbRegAppTable
		�EAcDbTextStyleTable
		�EAcDbUCSTable
	�EAcDbSymbolTableRecord
		�EAcDbAbstractViewTableRecord
			�EAcDbViewportTableRecord
			�EAcDbViewTableRecord
		�EAcDbBlockTableRecord
		�EAcDbDimStyleTableRecord
		�EAcDbLayerTableRecord
		�EAcDbLinetypeTableRecord
		�EAcDbRegAppTableRecord
		�EAcDbTextstyleTableRecord
		�EAcDbUCSTableRecord
	�EAcDbIictionary
		�EAcDbDictionarywithDefault

�EAcDbSymbolTableiterator
	�EAcDbstractViewTableiterator
		�EAcDbViewportTableiterator
		�EAcDbViewTableiterator
	�EAcDbBlockTableiterator
	�EAcDbDimStyleTableiterator
	�EAcDbFontTableTableiterator
	�EAcDbLayerTableiterator
	�EAcDbLinetypeTableiterator
	�EAcDbRegAppTableiterator
	�EAcDbRegAppTableiterator
	�EAcDbTextStyleTableiterator
	�EAcDbUCSTableiterator

�E�V���{�� �e�[�u���ƃf�B�N�V���i���̏d�v�ȈႢ
	�E�V���{�� �e�[�u�� ���R�[�h�� ObjectARX �A�v���P�[�V�������璼�ڍ폜�ł��Ȃ��B
	  �V���{�� �e�[�u�� ���R�[�h���폜������@�́A
	  	PURGE �R�}���h���g�����@�ƁA
	  	�u���b�N�����o������őI��I�Ƀt�B���^�����O �A�E�g������@
	  �����ł��B
	  �f�B�N�V���i�������L���Ă���I�u�W�F�N�g�́A�폜�ł��܂���B

	�E�V���{�� �e�[�u�� ���R�[�h�ł́A�֘A����{�������N���X��`�̃t�B�[���h�ɕۑ����邱�Ƃł��B
	����f�B�N�V���i���ł́A���̐}�̂悤�Ɋ֘A����I�u�W�F�N�g�Ƃ͊֌W�Ȃ��A
	���O�L�[���f�B�N�V���i���̈ꕔ�Ƃ��ĕۑ����܂��B

���V���{�� �e�[�u��
���u���b�N�e�[�u��
����w�e�[�u��
����w�v���p�e�B
	AcDbLayerTableRecord �N���X
	�E�t���[�Y/�t���[�Y����
		Acad::ErrorStatus AcDbLayerTableRecord::setIsFrozen(bool frozen);
		bool AcDbLayerTableRecord::isFrozen() const;
	�E�\���I��/�I�t
		void AcDbLayerTableRecord::setIsOff(bool off);
		bool AcDbLayerTableRecord::isOff() const;
	�E�r���[�|�[�g
		void AcDbLayerTableRecord::setVPDFLT(bool frozen);
		bool AcDbLayerTableRecord::VPDFLT() const;
			setVPDFLT() �֐��́A����l�ŐV�����r���[�|�[�g�ŉ�w���t���[�Y���邩���w�肵�܂��B
	�E���b�N/���b�N����
		void AcDbLayerTableRecord::setIsLocked(bool locked);
		bool AcDbLayerTableRecord::isLocked() const;
	�E�F
		void AcDbLayerTableRecord::setColor(const AcCmColor & color);
		AcCmColor AcDbLayerTableRecord::color() const;
	�E����
		void AcDbLayerTableRecord::setLinetypeObjectId(AcDbObjectId id);
		AcDbObjectId AcDbLayerTableRecord::linetypeObjectId() const;
�� ��w�e�[�u�� ���R�[�h�̍쐬�ƏC��
���݂̃f�[�^�x�[�X�p�̉�w�e�[�u�����擾���āA�������ݗp�ɃI�[�v�����܂��B

�����ł́A
�V������w�e�[�u�� ���R�[�h (AcDbLayerTableRecord) ���쐬���āA
��w�̓���̑��� (���O�A�t���[�Y�����A�I��/�I�t�A�r���[�|�[�g�A���b�N) ��ݒ�A
���ɐF�N���X �I�u�W�F�N�g���쐬���āA
��w�̐F��Ԃɐݒ肵�܂��B

��w�̐����ݒ肷�邽�߂ɁA
����e�[�u����ǂݍ��ݗp�ɃI�[�v�����āA
��]�̐��� (�����ł� "DASHED"(�j��)) �ɉ���������̃��R�[�h�̃I�u�W�F�N�g ID ���擾���܂��B
����̃I�u�W�F�N�g ID ���擾������A����e�[�u�����N���[�Y���A
�V������w�e�[�u�� ���R�[�h�̐����ݒ肵�܂��B

���̗�ł́Aadd() �֐����g�p���ĉ�w�e�[�u���ɉ�w�e�[�u�� ���R�[�h��ǉ����܂��B
�Ō�ɉ�w�e�[�u�� ���R�[�h�Ɖ�w�e�[�u�����̂��̂��N���[�Y���܂��B

	void addLayer() {
	    AcDbLayerTable *pLayerTbl;
	    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pLayerTbl, AcDb::kForWrite);
	    if (!pLayerTbl->has(_T("ASDK_TESTLAYER"))) {
	        AcDbLayerTableRecord *pLayerTblRcd = new AcDbLayerTableRecord;
	        pLayerTblRcd->setName(_T("ASDK_TESTLAYER"));
	        pLayerTblRcd->setIsFrozen(0);// layer to THAWED
	        pLayerTblRcd->setIsOff(0);   // layer to ON
	        pLayerTblRcd->setVPDFLT(0);  // viewport default
	        pLayerTblRcd->setIsLocked(0);// un-locked
	        AcCmColor color;
	        color.setColorIndex(1); // set color to red
	        pLayerTblRcd->setColor(color);

	        // For linetype, we need to provide the object ID of
	        // the linetype record for the linetype we want to
	        // use. First, we need to get the object ID.
	        //
	        AcDbLinetypeTable *pLinetypeTbl;
	        AcDbObjectId ltId;
	        acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pLinetypeTbl, AcDb::kForRead);
	        if ((pLinetypeTbl->getAt(_T("DASHED"), ltId)) != Acad::eOk) {
	            acutPrintf(_T("\nUnable to find DASHED linetype. Using CONTINUOUS"));

	            // CONTINUOUS is in every drawing, so use it.
	            //
	            pLinetypeTbl->getAt(_T("CONTINUOUS"), ltId);
	        }
	        pLinetypeTbl->close();
	        pLayerTblRcd->setLinetypeObjectId(ltId);
	        pLayerTbl->add(pLayerTblRcd);
	        pLayerTblRcd->close();
	        pLayerTbl->close();
	    } else {
	        pLayerTbl->close();
	        acutPrintf(_T("\nlayer already exists"));
	    }
	}

���C�e���^
	AcDb##BASE_NAME##Table::newIterator() �֐��ō쐬�ł��܂��B

	Acad::ErrorStatus AcDb##BASE_NAME##Table::newIterator(
	    AcDb##BASE_NAME##TableIterator*& pIterator,
	    bool atBeginning = Adesk::kTrue,
	    bool skipErased = Adesk::kTrue) const;

	newIterator() �֐��́A�e�[�u���̓��e�̒����ړ�����̂Ɏg���I�u�W�F�N�g���쐬���A
	�C�e���^ �I�u�W�F�N�g���w���悤�� pIterator ��ݒ肵�܂��B
	atBeginning �� True �̏ꍇ�̓C�e���^�̓e�[�u���̍ŏ�����n�܂�AFalse �̏ꍇ�̓e�[�u���̍Ōォ��n�܂�܂��B
	skipErased ������ True �̏ꍇ�A���߂ɁA�����͍ŏ� (�܂��͍Ō�) �̍폜����Ă��Ȃ����R�[�h�ɒu����܂��B
	False �̏ꍇ�́A�폜����Ă��邢�Ȃ��Ɋ֌W�Ȃ��A�ŏ� (�܂��͍Ō�) �̃��R�[�h�ɒu����܂��B
	
	�e�C�e���^ �N���X�Ŏg�p�ł���֐��ɂ��ẮA�wObjectARX Reference�x���Q�Ƃ��Ă��������B

	�V�����C�e���^���쐬������A������폜����ӔC������܂��B

	�V���{�� �e�[�u�� �ɉ����A�u���b�N �e�[�u�� ���R�[�h�͏��L����G���e�B�e�B�œ��삷��C�e���^�������܂��B
	AcDbBlockTableRecord �N���X�́A�V�����C�e���^�̂��߂ɗv�����ꂽ�ۂ�
	�N���X AcDbBlockTableRecordIterator �̃I�u�W�F�N�g��Ԃ��܂��B
	���̃C�e���^���g���ƁA�u���b�N �e�[�u�� ���R�[�h�Ɋ܂܂�Ă���G���e�B�e�B�����ړ�����
	����̃G���e�B�e�B��T�����Ƃ��ł��܂��B

	��: �C�e���^�͎g�p��ɕK���폜����K�v������܂��B
	���Z�q���폜���Ȃ��ƁA�f�[�^�x�[�X���N���[�Y�����Ƃ��ɃA�T�[�g�𔭐������錴���ɂȂ�܂��B
	acdbFree() ���g�p���ă|�C���^�ɎQ�Ƃ�n�����A�Ǝ��� delete() ���\�b�h���������܂��B

���e�[�u���̃C�e���C�g(����)
	���̗�̃R�[�h�́A����e�[�u���ɓ����Ă���V���{�� �e�[�u�� ���R�[�h�����ړ�����C�e���^���쐬���܂��B
	����͊e���R�[�h���擾���ēǂݍ��ݗp�ɃI�[�v�����A���햼���擾���A���R�[�h���N���[�Y���āA
	���햼���o�͂��܂��B�Ō�Ƀv���O�������C�e���^���폜���܂��B

	void iterateLinetypes() {
	    AcDbLinetypeTable *pLinetypeTbl;
	    acdbHostApplicationServices()->workingDatabase()->getSymbolTable(pLinetypeTbl, AcDb::kForRead);

	    // Create a new iterator that starts at table
	    // beginning and skips deleted.
	    AcDbLinetypeTableIterator *pLtIterator;
	    pLinetypeTbl->newIterator(pLtIterator);

	    // Walk the table, getting every table record and
	    // printing the linetype name.
	    AcDbLinetypeTableRecord *pLtTableRcd;
	    TCHAR *pLtName;
	    for (; !pLtIterator->done(); pLtIterator->step()) {
	        pLtIterator->getRecord(pLtTableRcd, AcDb::kForRead);
	        pLtTableRcd->getName(pLtName);
	        pLtTableRcd->close();
	        acutPrintf(_T("\nLinetype name is:  %s"), pLtName);
	        free(pLtName);
	    }
	    delete pLtIterator;
	    pLinetypeTbl->close();
	}

���f�B�N�V���i��
���O���[�v�ƃO���[�v�f�B�N�V���i��
	�O���[�v�́A�f�[�^�x�[�X �G���e�B�e�B�̎w�����ꂽ�R���N�V������ۑ�����R���e�i �I�u�W�F�N�g�B
	�G���e�B�e�B���폜����ƁA�������Ă����O���[�v���玩���I�ɍ폜����܂��B
	�G���e�B�e�B���폜����Ȃ��ꍇ�́A�O���[�v�Ɏ����I�ɍđ}������܂��B

	AcDbGroup::newIterator() �֐����g�p���ăC�e���^���擾���A�O���[�v���̃G���e�B�e�B�̒����ړ����܂��B
	AcDbGroup �N���X�ɂ͂��̑��ɂ��A
		�O���[�v�̍ŏ���Ō�ɃG���e�B�e�B��ǉ�����֐��A
		�O���[�v���̓���C���f�b�N�X�ɃG���e�B�e�B��}������֐��A
		�G���e�B�e�B���폜����֐��A
		�O���[�v���̕ʂ̈ʒu�ɃG���e�B�e�B��]������֐��B�wObjectARX Reference�x�� AcDbGroup ���Q�Ƃ��Ă��������B

	�܂��AAcDbGroup �N���X�� setColor()�AsetLayer()�AsetLinetype()�AsetVisibility()�AsetHighlight() �֐����g�p���āA�O���[�v�̑S�����o�̃v���p�e�B��ݒ肷�邱�Ƃ��ł��܂��B���̕��@�Őݒ肵�Ă��A�O���[�v���̊e�G���e�B�e�B���I�[�v�����ăv���p�e�B�𒼐ڐݒ肷��̂ƌ��ʂ͓����ɂȂ�܂��B

	�O���[�v�͕K���O���[�v �f�B�N�V���i���ɕۑ����Ȃ���΂Ȃ�܂���B�O���[�v �f�B�N�V���i���͎��̂悤�Ɏ擾�ł��܂��B

	AcDbDictionary* pGrpDict = acdbHostApplicationServices()->working Database()->getGroupDictionary(pGroupDict, AcDb::kForWrite);
	�܂��́ANamed Object Dictionary �ɂ��� "ACAD_GROUP" ���{�����Ă��O���[�v �f�B�N�V���i�����擾���邱�Ƃ��ł��܂��B

	���̊֐��́A�uASDK_GROUPTEST�v�Ƃ����O���[�v�ɓ����Ă���G���e�B�e�B���������I������悤�A�ŏ��Ƀ��[�U�Ƀv�����v�g���o���A�v���P�[�V�����̈ꕔ�ł��B���̊֐��͂��̌�AremoveAllButLines() �֐����Ăяo���ăO���[�v���C�e���C�g (����)�A�����ȊO�̂��ׂẴG���e�B�e�B���폜���܂��B�Ō�ɁA�O���[�v�Ɏc���Ă���G���e�B�e�B��Ԃɕς��܂��B


	void groups()
	{
	    AcDbGroup *pGroup = new AcDbGroup(_T("grouptest"));
	    AcDbDictionary *pGroupDict;
	    acdbHostApplicationServices()->workingDatabase() ->getGroupDictionary(pGroupDict, AcDb::kForWrite);
	    AcDbObjectId groupId;
	    pGroupDict->setAt(_T("ASDK_GROUPTEST"), pGroup, groupId);
	    pGroupDict->close();
	    pGroup->close();
	    makeGroup(groupId);
	    removeAllButLines(groupId);
	}

	// Prompts the user to select objects to add to the group,
	// opens the group identified by "groupId" passed in as
	// an argument, then adds the selected objects to the group.
	//
	void makeGroup(AcDbObjectId groupId)
	{
	    ads_name sset;
	    int err = acedSSGet(NULL, NULL, NULL, NULL, sset);
	    if (err != RTNORM) {
	        return;
	    }
	    AcDbGroup *pGroup;
	    acdbOpenObject(pGroup, groupId, AcDb::kForWrite);

	    // Traverse the selection set, exchanging each ads_name
	    // for an object ID, then adding the object to the group.
	    //
	    long i, length;
	    ads_name ename;
	    AcDbObjectId entId;
	    acedSSLength(sset, &length);
	    for (i = 0; i < length; i++) {
	        acedSSName(sset, i, ename);
	        acdbGetObjectId(entId, ename);
	        pGroup->append(entId);
	    }
	    pGroup->close();
	    acedSSFree(sset);
	}

	// Accepts an object ID of an AcDbGroup object, opens it,
	// then iterates over the group, removing all entities that
	// are not AcDbLines and changing all remaining entities in
	// the group to color red.
	//
	void removeAllButLines(AcDbObjectId groupId)
	{
	    AcDbGroup *pGroup;
	    acdbOpenObject(pGroup, groupId, AcDb::kForWrite);
	    AcDbGroupIterator *pIter = pGroup->newIterator();
	    AcDbObject *pObj;
	    for (; !pIter->done(); pIter->next()) {
	        pIter->getObject(pObj, AcDb::kForRead);

	        // If it is not a line or descended from a line,
	        // close it and remove it from the group.  Otherwise,
	        // just close it.
	        //
	        if (!pObj->isKindOf(AcDbLine::desc())) {

	            // AcDbGroup::remove() requires that the object
	            // to be removed be closed, so close it now.
	            //
	            pObj->close();
	            pGroup->remove(pIter->objectId());

	        } else {
	            pObj->close();
	        }
	    }
	    delete pIter;

	    // Now change the color of all the entities in the group
	    // to red (AutoCAD color index number 1).
	    //
	    pGroup->setColorIndex(1);
	    pGroup->close();
	}
	��: AcDbGroup �̃|�C���^�́A���̂��ׂẴC�e���^���폜����܂ł̓N���[�Y���Ă͂����܂���B































