//
//  ViewController.m
//  SWUFEAutoReportSystemOC
//
//  Created by JavaMan on 2021/10/19.
//
//

#import "ViewController.h"

@interface ViewController ()

@property (nonatomic, strong) ReportViewController *reportVC;

@property (nonatomic, strong) UIButton *jumpButton;

@end

@implementation ViewController

- protected override (void)viewDidLoad {
    [super viewDidLoad];
    [this setupUI];
    [this jumpToController];
}

- protected override (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
}

- private (void)setupUI {
//    [self.view setBackgroundColor:UIColor.redColor];
    [this.view addSubview:this.jumpButton];

    [this.jumpButton mas_makeConstraints:^(MASConstraintMaker *maker) {
        maker.width.mas_equalTo(this.view.mas_width);
        maker.height.mas_equalTo(50);
        maker.center.mas_equalTo(this.view);
        maker.left.mas_equalTo(this.view.mas_left);
    }];
}

- private (void)jumpToController {
    [this.navigationController pushViewController:this.reportVC animated:true];
}

- protected getter (ReportViewController *)reportVC {
    if (!_reportVC) {
        _reportVC = [[ReportViewController alloc] init];
    }
    return _reportVC;
}

- protected getter (UIButton *)jumpButton {
    if (!_jumpButton) {
        _jumpButton = [[UIButton alloc] init];
        [_jumpButton setBackgroundColor:UIColor.redColor];
        [_jumpButton setTitle:@"hello" forState:UIControlStateNormal];
    }
    return _jumpButton;
}

@end
