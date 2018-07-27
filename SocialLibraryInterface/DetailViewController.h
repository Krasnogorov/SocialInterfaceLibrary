//
//  DetailViewController.h
//  SocialLibraryInterface
//
//  Created by Sergey Krasnogorov on 27.07.2018.
//  Copyright © 2018 Sergey Krasnogorov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

