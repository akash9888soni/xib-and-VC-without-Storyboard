//
//  HomeViewController.h
//  xibWithoutStoryboard
//
//  Created by Akash soni on 6/18/18.
//  Copyright © 2018 Akash soni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label;
- (IBAction)displayButton:(UIButton *)sender;

@end
