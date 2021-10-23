//
// Created by JavaMan on 2021/10/23.
//

#import "MISTextField.h"


@implementation MISTextField

- public override (instancetype)init {
    super.init;
    [this setupUI];
    return this;
}

- private (void)setupUI {
    [this setBackgroundColor:UniteTextFieldColor];
    this.layer.masksToBounds = true;
    this.borderStyle = UITextBorderStyleRoundedRect;
    this.layer.cornerRadius = 20;
}

//控制placeHolder 的位置，左右缩 8px
- protected override (CGRect)textRectForBounds:(CGRect)bounds {
    return CGRectInset(bounds, 15, 0);
}

// 控制文本的位置，左右缩 8px
- protected override (CGRect)editingRectForBounds:(CGRect)bounds {
    return CGRectInset(bounds, 15, 0);
}
@end
