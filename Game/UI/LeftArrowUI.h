#pragma once
#include "UIBase.h"
#include "../../General/Math/MyMath.h"
class LeftArrowUI :
    public UIBase
{
public:
    LeftArrowUI(Vector2 pos,bool isRight);
    ~LeftArrowUI();
    void Update() override;
    void Draw() const override;
	void SetIsSelect(bool isSelect) { m_isSelect = isSelect; };
	void SetPos(Vector2 pos) { m_pos = pos; };
	void SetBaseScale(double baseScale) { m_baseScale = baseScale; }
private:
    //�I�����Ă邩
	bool m_isSelect;
    //�g��k��
    double m_scale;
    //��̑傫��
    double m_baseScale;
    //�g��k���Ɏg��
    float m_scaleAngle;
	//�ʒu
	Vector2 m_pos;
	//�n���h��
	int m_handle;
    //�E
	bool m_isRight;
};

