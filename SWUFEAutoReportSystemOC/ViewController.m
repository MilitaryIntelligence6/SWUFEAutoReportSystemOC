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

@end

@implementation ViewController

- override (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- override (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
//    [this presentViewController: this.reportVC animated:true completion:nil];
    if (!this.navigationController) {
        LOG_NPE;
    }
    [this.navigationController pushViewController:this.reportVC animated:true];
}

- (ReportViewController *)reportVC {
    if (!_reportVC) {
        _reportVC = [[ReportViewController alloc] init];
    }
    return _reportVC;
}

@end
