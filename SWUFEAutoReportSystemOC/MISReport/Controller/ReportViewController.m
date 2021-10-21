//
// Created by JavaMan on 2021/10/19.
//

#import "ReportViewController.h"

@interface ReportViewController()

@property (nonatomic, strong) UILabel *label;

@property (nonatomic, strong) UITextField *usernameField;

@property (nonatomic, strong) UITextField *passwordField;

@end

@implementation ReportViewController

- protected override (void)viewDidLoad {
    [super viewDidLoad];
//    [this.view setBounds:SCREEN_BOUNDS];
//    [this.view setBackgroundColor:UIColor.whiteColor];
    [this.view setBackgroundColor:UIColor.redColor];
    [this.view addSubview:this.label];
//    YES
}

- public getter (UILabel *)label {
    if (!_label) {
        _label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 300, 50)];
        [_label setText:@"hello"];
    }
    return _label;
}

@end
