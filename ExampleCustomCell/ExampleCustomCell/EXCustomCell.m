//
//  EXCustomCell.m
//  ExampleCustomCell
//
//  Created by Maksim Pecherskiy on 11/13/12.
//  Copyright (c) 2012 MrMaksimize. All rights reserved.
//

#import "EXCustomCell.h"

@implementation EXCustomCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
      //self.cellItemImageView.image = nil;
      self.cellItemLabel.text = nil;
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
