#pragma once
#include <memory>
#include "../../General/Math/MyMath.h"
//�A�N�^�[�����G�ꏊ�̒��ɂ��邩�`�F�b�N����
class SearchPlace 
{
public:
	SearchPlace(Vector3 pos,float rang);
	~SearchPlace();
	//�f�o�b�O�p
	void Draw()const;
	//�͈͓��ɂ��邩
	bool IsInSearchPlace(Vector3 targetPos)const;
	//���W
	Vector3 GetPos()const { return m_pos; };
	//�͈�
	void SetRang(float rang) { m_rang = rang; };
	float GetRang() const{ return m_rang; };
private:
	//�͈�
	float m_rang;
	//���W
	Vector3 m_pos;
};

