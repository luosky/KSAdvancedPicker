//
//  ViewController.h
//  KSAdvancedPickerDemo
//
//  Created by Davide De Rosa on 10/17/11.
//  Copyright (c) 2011 algoritmico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KSAdvancedPicker.h"

@interface ViewController : UIViewController<KSAdvancedPickerDelegate> {
    NSMutableArray *data;
}

@end
