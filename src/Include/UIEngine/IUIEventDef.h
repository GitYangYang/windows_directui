#pragma once

namespace EVENT
{
	enum
	{
		BASE_EVENT_START                = 0x0000 ,      //�����¼���ʼ
		MOUSEENTER                      ,               //������
		MOUSELEAVE                      ,               //����Ƴ�
		MOUSEMOVE                       ,               //����ƶ�
		MOUSELBTNDOWN                   ,               //����������
		MOUSELBTNUP                     ,               //������̧��
		MOUSELBTNCLICK                  ,               //���������
		MOUSELBTNDBCLICK                ,               //���˫��
		MOUSERBTNDOWN                   ,               //����Ұ���
		MOUSERBTNUP                     ,               //����Ҽ�����
		MOUSERBCLICK                    ,               //����һ����

		DRAGBEGIN                       ,               //��ʼ�϶�
		DRAGGING                        ,               //�϶���
		DRAGEND                         ,               //�϶�����

		DRAWBEGIN                       ,               //���ƿ�ʼ
		DRAWEND                         ,               //���ƽ���

		LAYOUTBEGIN                     ,               //��ʼ����
		LAYOUTEND                       ,               //���ֽ���
		BASE_EVENT_END                  = 0x00ff ,      //����ʱ�����
	} ;
}

struct tEventArg
{
	INT                     nEventId ;
} ;

struct tEventArgPoint : public tEventArg
{
	POINT                   pt ;
} ;

struct tEventArgInt : public tEventArg
{
	INT                     nValue ;
};

struct tEventArgBool : public tEventArg
{
	BOOL                    bValue ;
} ;