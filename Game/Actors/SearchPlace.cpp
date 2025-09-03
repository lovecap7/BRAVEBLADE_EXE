#include "SearchPlace.h"
#include "../../General/Collision/SphereCollider.h"
#include "../../General/Rigidbody.h"
#include "Actor.h"
#include "../../Shader/MyDraw.h"
#include <DxLib.h>

SearchPlace::SearchPlace(Vector3 pos, float rang) :
	m_pos(pos),
	m_rang(rang)
{
}

SearchPlace::~SearchPlace()
{
}

void SearchPlace::Draw() const
{
	MyDrawUtils::Draw3DCircle(m_pos, m_rang,36,0xff0000);
}

bool SearchPlace::IsInSearchPlace(Vector3 targetPos) const
{
	//�͈͓��ɂ��邩
	float dist = Vector3(targetPos - m_pos).Magnitude();
	if (dist <= m_rang)
	{
		return true;
	}
	//�����܂ŗ�����
	return false;
}
	