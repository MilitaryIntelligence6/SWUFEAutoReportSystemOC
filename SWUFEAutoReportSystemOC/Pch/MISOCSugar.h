//
// Created by JavaMan on 2021/10/20.
//

#ifndef SWUFEAUTOREPORTSYSTEMOC_MISOCSUGAR_H
#define SWUFEAUTOREPORTSYSTEMOC_MISOCSUGAR_H


// github<https://github.com/mogulanyang>
// 微博<http://weibo.com/u/1806924330?refer_flag=1001030101_>
// 该项目是小兰魔法手册.


#pragma mark - 1.0.必用宏
/** 屏幕属性 */
//主窗口
#define KeyWindow \
[UIApplication sharedApplication].keyWindow
//屏幕
#define ScreenWeight [UIScreen mainScreen].bounds.size.width

#define ScreenHeight [UIScreen mainScreen].bounds.size.height

#define UIScreen_W [UIScreen mainScreen].bounds.size.width

#define UIScreen_H [UIScreen mainScreen].bounds.size.height

//weakSelf
#define WeakThis(type)  __weak typeof(type) weak##type = type;


/** 通知相关  */
//通知中心发送通知
#define NSNotificationPost_(ly_Name, ly_UserInfo) [[NSNotificationCenter defaultCenter] postNotificationName:ly_Name object:nil userInfo:(ly_UserInfo)]

//通知中心接收通知
#define NSNotificationReceive_(ly_SEL, ly_name) [[NSNotificationCenter defaultCenter] addObserver:self selector:ly_SEL name:ly_name object:nil]
//移除通知
#define NSNotificationRemove [[NSNotificationCenter defaultCenter] removeObserver:self]


//const字符串
#define NSString_Const_H_(ly_strName) UIKIT_EXTERN NSString * const ly_strName;

#define NSString_Const_M_(ly_strName, ly_String) NSString * const ly_strName = ly_String;


#define NSUserDefaultsSave_(key, value) [[NSUserDefaults standardUserDefaults] setObject:value forKey:key] //以key,value存储信息

#define NSUserDefaultsGet_(key) [[NSUserDefaults standardUserDefaults] objectForKey:key] //以key取出value

#define NSUserDefaultsRemove_(key) [[NSUserDefaults standardUserDefaults] removeObjectForKey:key] //以key删除value

//立即同步
#define NSUserDefaultsSync [[NSUserDefaults standardUserDefaults] synchronize]

/** 颜色  */
//RGB颜色
#define UIColorWithRGB_(ly_R, ly_G, ly_B) [UIColor colorWithRed:ly_R green:ly_G blue:ly_B alpha:1]

#define ColorRGB_(ly_R, ly_G, ly_B) [UIColor colorWithRed:ly_R green:ly_G blue:ly_B alpha:1]

//随机颜色
#define UIColorWithRandom [UIColor colorWithRed:arc4random_uniform(256) / 255.0 green:arc4random_uniform(256) / 255.0 blue:arc4random_uniform(256) / 255.0 alpha:1]

#define RandomColor [UIColor colorWithRed:arc4random_uniform(256) / 255.0 green:arc4random_uniform(256) / 255.0 blue:arc4random_uniform(256) / 255.0 alpha:1]

//十六进制颜色
#define UIColorWithHex16_(ly_0Xefefef) [UIColor colorWithRed:((ly_0Xefefef & 0xFF0000) >> 16) / 255.0 green:((ly_0Xefefef & 0x00FF00) >> 8) / 255.0 blue:((ly_0Xefefef & 0x0000FF)) / 255.0 alpha:1]

#define colorWithHex_(ly_0Xefefef) [UIColor colorWithRed:((ly_0Xefefef & 0xFF0000) >> 16) / 255.0 green:((ly_0Xefefef & 0x00FF00) >> 8) / 255.0 blue:((ly_0Xefefef & 0x0000FF)) / 255.0 alpha:1]


#pragma mark - 定义属性
/**
 *     便捷定义@property属性
 */

/** copy */
//NSString
#define StringCopy(name) __copy_property__(NSString*,name)

//NSArray
#define ArrayCopy(name) __copy_property__(NSArray*,name)

//NSDictionary
#define MapCopy(name) __copy_property__(NSDictionary*,name)

//NSNumber,它没用对应的不可变类，其实用copy或strong没有区别
#define NumberCopy(name) __copy_property__(NSNumber*,name)

//NSData
#define DataCopy(name) __copy_property__(NSData*,name)

//NSSet
#define SetCopy(name) __copy_property__(NSSet*,name)

//NSIndexSet
#define IndexSetCopy(name) __copy_property__(NSIndexSet*,name)

//带多态的数组和可变数组
#define mArray_type(modelType, name) @property(nonatomic, strong)NSMutableArray <modelType *> *name;

#define Array_type(modelType, name) @property(nonatomic, strong)NSArray <modelType *> *name;


//代码块，名称和传参，没有传参就不填
#define Block_(name, ...) __set_block__(void,name,__VA_ARGS__)

//有返回值的代码块
#define BlockReturn_(name, returnClass, ...) __set_block__(returnClass,name,__VA_ARGS__)


/** strong */
//UISearchBar
#define SearchBar_(ly_name) @property (nonatomic, strong) UISearchBar *ly_name;

#define MapView_(ly_name) @property (nonatomic, strong) MKMapView *ly_name;

#define LocationManager_(ly_name) @property (nonatomic, strong)CLLocationManager *ly_name;

//UICollectionViewFlowLayout
#define FlowLayout_(ly_name) @property(nonatomic, strong)UICollectionViewFlowLayout *ly_name;

//NSMutableString
#define mString_(name, ...) __strong_property__(NSMutableString*,name,__VA_ARGS__)

//NSMutableArray
#define mArray_(name, ...) __strong_property__(NSMutableArray*,name,__VA_ARGS__)

//NSMutableDictionary
#define mDictionary_(name, ...) __strong_property__(NSMutableDictionary*,name,__VA_ARGS__)

//NSMutableData
#define mData_(name, ...) __strong_property__(NSMutableData*,name,__VA_ARGS__)

//NSMutableSet
#define mSet_(name, ...) __strong_property__(NSMutableSet*,name,__VA_ARGS__)

//NSMutableIndexSet
#define mIndexSet_(name, ...) __strong_property__(NSMutableIndexSet*,name,__VA_ARGS__)

//UIImage
#define Image_(name) __strong_property__(UIImage*,name)

//UIColor
#define Color_(name) __strong_property__(UIColor*,name)

//id
#define id_(name, ...) __strong_property__(id,name,__VA_ARGS__)

//UIView
#define View_(name, ...) __strong_property__(UIView*,name,__VA_ARGS__)

//UIImageView
#define ImageView_(name, ...) __strong_property__(UIImageView*,name,__VA_ARGS__)

//UILabel
#define Label_(name, ...) __strong_property__(UILabel*,name,__VA_ARGS__)

//UIButton
#define Button_(name, ...) __strong_property__(UIButton*,name,__VA_ARGS__)

//UITableView
#define TableView_(name, ...) __strong_property__(UITableView*,name,__VA_ARGS__)

//UICollectionView
#define CollectionView_(name, ...) __strong_property__(UICollectionView*,name,__VA_ARGS__)

//UISegmentedControl
#define SegmentedControl_(name, ...) __strong_property__(UISegmentedControl*,name,__VA_ARGS__)

//UITextField
#define TextField_(name, ...) __strong_property__(UITextField*,name,__VA_ARGS__)

//UISlider
#define Slider_(name, ...) __strong_property__(UISlider*,name,__VA_ARGS__)

//UISwitch
#define Switch_(name, ...) __strong_property__(UISwitch*,name,__VA_ARGS__)

//UIActivityIndicatorView
#define ActivityIndicatorView_(name, ...) __strong_property__(UIActivityIndicatorView*,name,__VA_ARGS__)

//UIProgressView
#define ProgressView_(name, ...) __strong_property__(UIProgressView*,name,__VA_ARGS__)

//UIPageControl
#define PageControl_(name, ...) __strong_property__(UIPageControl*,name,__VA_ARGS__)

//UIStepper
#define Stepper_(name, ...) __strong_property__(UIStepper*,name,__VA_ARGS__)

//UITextView
#define TextView_(name, ...) __strong_property__(UITextView*,name,__VA_ARGS__)

//UIScrollView
#define ScrollView_(name, ...) __strong_property__(UIScrollView*,name,__VA_ARGS__)

//UIDatePicker
#define DatePicker_(name, ...) __strong_property__(UIDatePicker*,name,__VA_ARGS__)

//UIPickerView
#define PickerView_(name, ...) __strong_property__(UIPickerView*,name,__VA_ARGS__)

//UIWebView
#define WebView_(name, ...) __strong_property__(UIWebView*,name,__VA_ARGS__)

//自定义类
#define CustomObject_(class, name, ...) __strong_property__(class*,name,__VA_ARGS__)


/** assign */

//int
#define int_(name, ...) __assign_property__(int,name,__VA_ARGS__)

//float
#define float_(name, ...) __assign_property__(float,name,__VA_ARGS__)

//double
#define double_(name, ...) __assign_property__(double,name,__VA_ARGS__)

//CGFloat
#define CGFloat_(name, ...) __assign_property__(CGFloat,name,__VA_ARGS__)

//NSInteger
#define NSInteger_(name, ...) __assign_property__(NSInteger,name,__VA_ARGS__)

//NSUInteger
#define NSUInteger_(name, ...) __assign_property__(NSUInteger,name,__VA_ARGS__)

//BOOL
#define BOOL_(name, ...) __assign_property__(BOOL,name,__VA_ARGS__)

//CGRect
#define CGRect_(name, ...) __assign_property__(CGRect,name,__VA_ARGS__)

//CGSize
#define CGSize_(name, ...) __assign_property__(CGSize,name,__VA_ARGS__)

//CGPoint
#define CGPoint_(name, ...) __assign_property__(CGPoint,name,__VA_ARGS__)

//CGAffineTransform
#define CGAffineTransform_(name, ...) __assign_property__(CGAffineTransform,name,__VA_ARGS__)

//NSTimeInterval
#define NSTimeInterval_(name, ...) __assign_property__(NSTimeInterval,name,__VA_ARGS__)

//Class
#define Class_(name) __assign_property__(Class,name)



/** weak */

//UIImageView
#define weakImageView_(name, ...) __weak_property__(UIImageView*,name,__VA_ARGS__)

//UIView
#define weakView_(name, ...) __weak_property__(UIView*,name,__VA_ARGS__)

//UILabel
#define weakLabel_(name, ...) __weak_property__(UILabel*,name,__VA_ARGS__)

//UIButton
#define weakButton_(name, ...) __weak_property__(UIButton*,name,__VA_ARGS__)

//UITableView
#define weakTableView_(name, ...) __weak_property__(UITableView*,name,__VA_ARGS__)

//UICollectionView
#define weakCollectionView_(name, ...) __weak_property__(UICollectionView*,name,__VA_ARGS__)

//UISegmentedControl
#define weakSegmentedControl_(name, ...) __weak_property__(UISegmentedControl*,name,__VA_ARGS__)

//UITextField
#define weakTextField_(name, ...) __weak_property__(UITextField*,name,__VA_ARGS__)

//UISlider
#define weakSlider_(name, ...) __weak_property__(UISlider*,name,__VA_ARGS__)

//UISwitch
#define weakSwitch_(name, ...) __weak_property__(UISwitch*,name,__VA_ARGS__)

//UIActivityIndicatorView
#define weakActivityIndicatorView_(name, ...) __weak_property__(UIActivityIndicatorView*,name,__VA_ARGS__)

//UIProgressView
#define weakProgressView_(name, ...) __weak_property__(UIProgressView*,name,__VA_ARGS__)

//UIPageControl
#define weakPageControl_(name, ...) __weak_property__(UIPageControl*,name,__VA_ARGS__)

//UIStepper
#define weakStepper_(name, ...) __weak_property__(UIStepper*,name,__VA_ARGS__)

//UITextView
#define weakTextView_(name, ...) __weak_property__(UITextView*,name,__VA_ARGS__)

//UIScrollView
#define weakScrollView_(name, ...) __weak_property__(UIScrollView*,name,__VA_ARGS__)

//UIDatePicker
#define weakDatePicker_(name, ...) __weak_property__(UIDatePicker*,name,__VA_ARGS__)

//UIPickerView
#define weakPickerView_(name, ...) __weak_property__(UIPickerView*,name,__VA_ARGS__)

//UIWebView
#define weakWebView_(name, ...) __weak_property__(UIWebView*,name,__VA_ARGS__)

//自定义类
#define weakDIYObj_(class, name, ...) __weak_property__(class*,name,__VA_ARGS__)

//delegate
#define Delegate_(class, name) __weak_property__(id<class>,name)


/** base */

//copy && DIY
#define __copy_property__(class, var, ...) __set_property__(class,var,copy,__VA_ARGS__)

//strong && DIY
#define __strong_property__(class, var, ...) __set_property__(class,var,strong,__VA_ARGS__)

//weak && DIY
#define __weak_property__(class, var, ...) __set_property__(class,var,weak,__VA_ARGS__)

//assign && DIY
#define __assign_property__(class, var, ...) __set_property__(class,var,assign,__VA_ARGS__)

//DIY
#define __custom_property__(class, var, ...) __set_property__(class,var,__VA_ARGS__)

//block
#define __set_block__(class, name, ...) __set_property__(class,(^name)(__VA_ARGS__),copy)

//baseMacro
#define __set_property__(class, var, ...) @property (nonatomic, __VA_ARGS__) class var



/**
 *     其他宏
 */
//block的调用
#define Call(block, ...) !block?:block(__VA_ARGS__);

//block的调用，并带有返回值
#define CallRerurn(block, failReturnValue, ...) block?(block(__VA_ARGS__)):(failReturnValue)

//打印宏
#ifdef DEBUG
#define printlnd(FORMAT, ...) fprintf(stderr,"%s %s:%d\t%s\n",__TIME__,[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define printlnd(...)
#endif

/**
 初始化属性
 */
#pragma mark - 2.0.初始化控件

//初始化Button
#define getButton(ly_name, ly_superView, ly_SEL, ly_imageName, ly_title, ly_font, ly_titleColor, ...)\
- (UIButton *)ly_name\
{\
    __lazy__(ly_name,\
             UIButton *obj = [UIButton buttonWithType:UIButtonTypeCustom]; \
             __if__(ly_title,[obj setTitle:ly_title forState:UIControlStateNormal];) \
             __if__(ly_font,obj.titleLabel.font = [UIFont systemFontOfSize:ly_font];) \
             __if__(ly_titleColor,[obj setTitleColor:ly_titleColor forState:UIControlStateNormal];) \
             __if__(ly_imageName, [obj setImage:[UIImage imageNamed:ly_imageName] forState:UIControlStateNormal];)\
             __if__(ly_SEL, [obj addTarget:self action:ly_SEL forControlEvents:UIControlEventTouchUpInside];)\
             [ly_superView addSubview:obj];\
             __VA_ARGS__\
             obj;\
             )\
}

//初始化Label
#define getLabel(ly_name, ly_superView, ly_text, ly_titleColor, ly_font, ...) \
-(UILabel *)ly_name\
{ \
    __lazy__(ly_name,\
            UILabel *obj = [[UILabel alloc] init]; \
            __if__(ly_text,obj.text = ly_text;) \
            __if__(ly_titleColor,obj.textColor = ly_titleColor;) \
            __if__(ly_font,obj.font = [UIFont systemFontOfSize:ly_font];)\
            obj.numberOfLines = 0; \
            [ly_superView addSubview:obj]; \
            __VA_ARGS__\
            obj;\
            )\
}

//初始化imageView
#define getImageView(ly_name, ly_superView, ly_imageName, ...) \
- (UIImageView *)ly_name \
{ \
    __lazy__(ly_name,\
            UIImageView *obj = [[UIImageView alloc] init]; \
            obj.image = [UIImage imageNamed:ly_imageName]; \
            obj.contentMode = UIViewContentModeScaleAspectFill; \
            [ly_superView addSubview:obj]; \
            __VA_ARGS__\
            obj; \
            ) \
}

//初始化textField
#define getTextField(ly_name, ly_superView, ly_UIFont, ly_placeholder, ...) \
-(UITextField *)ly_name \
{ \
    __lazy__(ly_name,\
            UITextField *obj = [[UITextField alloc] init]; \
            __if__(ly_placeholder,obj.placeholder = ly_placeholder;) \
            obj.borderStyle = UITextBorderStyleRoundedRect; \
            obj.font = ly_UIFont;  \
            [ly_superView addSubview:obj]; \
            __VA_ARGS__\
            obj; \
        ) \
}

//初始化tableView (记得注册Cell)
#define getTableView(ly_name, ly_superView, ly_style, ...) \
- (UITableView *)ly_name \
{ \
    __lazy__(ly_name,\
            UITableView *obj = [[UITableView alloc] initWithFrame:CGRectZero style: ly_style]; \
            [ly_superView addSubview:obj]; \
            obj.dataSource = self; \
            obj.delegate = self; \
            __VA_ARGS__\
            obj; \
        ) \
}

//初始化collectionViewFlowLayout
#define getFlowLayout(ly_name, ly_scrollDirection, ly_itemSize, ly_minimumLineSpacing, ly_minimumInteritemSpacing, ...) \
- (UICollectionViewFlowLayout *)ly_name \
{ \
    __lazy__(ly_name,\
            UICollectionViewFlowLayout *obj = [[UICollectionViewFlowLayout alloc] init]; \
            __if__(ly_scrollDirection,obj.scrollDirection = ly_scrollDirection;) \
            obj.minimumLineSpacing = ly_minimumLineSpacing; \
            __if__(ly_minimumInteritemSpacing,obj.minimumInteritemSpacing = ly_minimumInteritemSpacing;) \
            obj.itemSize = ly_itemSize; \
            __VA_ARGS__\
            obj; \
        ) \
}

//初始化collectionView
#define getCollectionView(ly_name, ly_superView, ly_flowLayout, ly_color, ...) \
- (UICollectionView *)ly_name \
{ \
        __lazy__(ly_name,\
            UICollectionView *obj = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:ly_flowLayout]; \
            obj.dataSource = self; \
            obj.delegate = self; \
            [ly_superView addSubview:obj]; \
            obj.backgroundColor = ly_color; \
            __VA_ARGS__\
            obj; \
        )\
}

//初始化普通数组
#define getImmutableArray(ly_name, ...) \
- (NSArray *)ly_name \
{ \
    __lazy__(ly_name,\
            NSArray *obj = [NSArray array]; \
            __VA_ARGS__\
            obj; \
        ) \
}

//初始化可变数组
#define getMutableArray(ly_name, ...)\
- (NSMutableArray *)ly_name \
{ \
        __lazy__(ly_name,\
            NSMutableArray *obj = [NSMutableArray array]; \
            __VA_ARGS__\
            obj; \
        ) \
}

//初始化字典
#define getImmutableMap(ly_name, ...) \
- (NSDictionary *)ly_name \
{ \
    __lazy__(ly_name,\
            NSDictionary *obj = [NSDictionary dictionary]; \
            __VA_ARGS__\
            obj; \
        ) \
}

//初始化可变字典
#define getMutableMap(ly_name, ...) \
- (NSMutableDictionary *)ly_name \
{ \
    __lazy__(ly_name,\
            NSMutableDictionary *obj = [NSMutableDictionary dictionary]; \
            __VA_ARGS__\
            obj; \
        ) \
}

//初始化自定义对象
#define getObjectWithClass(ly_class, ly_name, ...) \
- (ly_class *)ly_name \
{ \
    __lazy__(ly_name, \
        ly_class *obj = [[ly_class alloc] init]; \
        __VA_ARGS__ \
        obj ; \
    )\
}

//初始化View
#define getView(ly_name, ly_superView, ly_backgroundColor, ...) \
- (UIView *)ly_name \
{ \
    __lazy__(ly_name,\
             UIView *obj = [[UIView alloc] init]; \
             [ly_superView addSubview:obj];\
             obj.backgroundColor = ly_backgroundColor; \
             __VA_ARGS__\
             obj; \
             ) \
}

//初始化MapView
#define getMapView(ly_name, ly_superView, ...) \
getObjectWithClass(MKMapView, ly_name, \
obj.mapType = MKMapTypeStandard; \
obj.frame = CGRectMake(0, 0, UIScreen_W, UIScreen_H); \
obj.delegate = self; \
[ly_superView addSubview:obj]; \
__VA_ARGS__\
)
//初始化LocationManager
#define getLocationManger(ly_name, ly_distanceFilter, ly_desiredAccuracy, ...) \
getObjectWithClass(CLLocationManager, ly_name, \
            [obj requestWhenInUseAuthorization]; \
            obj.delegate = self; \
            if([UIDevice currentDevice].systemVersion.floatValue >= 9.0){ \
                [obj allowsBackgroundLocationUpdates]; \
            } \
            obj.distanceFilter = ly_distanceFilter; \
            obj.desiredAccuracy = ly_desiredAccuracy; \
            __VA_ARGS__\
            )
/**************************************/
//初始化非全局控件
#define newInstanceWithInit(ly_class, ...) \
({\
    ly_class *obj  = [[ly_class alloc] init];  \
    __VA_ARGS__\
    obj; \
});
/**************************************/
//baseif
#define __if__(condition, ...) \
if (condition) { \
__VA_ARGS__\
}
//baseLazy
#define __lazy__(ly_name, ...) \
if (!_##ly_name) { \
    _##ly_name = ({ \
        __VA_ARGS__\
    }); \
} \
return _##ly_name; \


#endif //SWUFEAUTOREPORTSYSTEMOC_MISOCSUGAR_H
