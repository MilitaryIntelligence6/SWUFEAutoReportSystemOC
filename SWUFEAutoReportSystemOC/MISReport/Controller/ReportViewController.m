//
// Created by JavaMan on 2021/10/19.
//

#import "ReportViewController.h"

@interface ReportViewController ()

@property(nonatomic, strong) UILabel *usernameLabel;

@property(nonatomic, strong) UILabel *passwordLabel;

@property(nonatomic, strong) UITextField *usernameField;

@property(nonatomic, strong) UITextField *passwordField;

@end

@implementation ReportViewController

- protected override (void)viewDidLoad {
    [super viewDidLoad];
    [this setupUI];
}

- private (void)setupUI {
    // 不向整个屏幕拓展, tabbar safearea;
    this.edgesForExtendedLayout = UIRectEdgeNone;
    [this.view setBackgroundColor:UIColor.whiteColor];

    [this.view addSubview:this.usernameLabel];
    [this.usernameLabel mas_makeConstraints:^(MASConstraintMaker *maker) {
        maker.top.mas_equalTo(this.view.mas_top).offset(10);
        maker.height.mas_equalTo(50);
        maker.left.mas_equalTo(this.view.mas_left).offset(10);
    }];

    [this.view addSubview:this.usernameField];
    [this.usernameField mas_makeConstraints:^(MASConstraintMaker *maker) {
        maker.top.mas_equalTo(this.view.mas_top).offset(10);
        maker.height.mas_equalTo(50);
        maker.left.mas_equalTo(this.view.mas_left).offset(100);
        maker.right.mas_equalTo(this.view.mas_right).offset(-10);
    }];
}

- protected getter (UILabel *)usernameLabel {
    if (!_usernameLabel) {
        _usernameLabel = [[UILabel alloc] init];
        [_usernameLabel setText:@"西财用户名"];
    }
    return _usernameLabel;
}

- protected getter (UITextField *)usernameField {
    if (!_usernameField) {
        _usernameField = [[UITextField alloc] init];
        [_usernameField setBackgroundColor:UniteTextFieldColor];
        _usernameField.layer.masksToBounds = true;
        _usernameField.borderStyle = UITextBorderStyleRoundedRect;
        _usernameField.layer.cornerRadius = 20;
        // 要么就重写控件;
        [_usernameField setValue:@10 forKey:@"paddingLeft"];//左
        [_usernameField setValue:@10 forKey:@"paddingRight"];//右
    }
    return _usernameField;
}

@end
