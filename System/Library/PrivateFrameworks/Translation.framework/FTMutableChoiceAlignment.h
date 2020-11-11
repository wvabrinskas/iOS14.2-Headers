/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTChoiceAlignment.h>

@class NSArray;

@interface FTMutableChoiceAlignment : FTChoiceAlignment

@property (nonatomic,copy) NSArray * post_itn_choice_indices; 
@property (nonatomic,copy) NSArray * pre_itn_token_to_post_itn_char_alignments; 
-(id)init;
-(NSArray *)post_itn_choice_indices;
-(void)setPost_itn_choice_indices:(NSArray *)arg1 ;
-(NSArray *)pre_itn_token_to_post_itn_char_alignments;
-(void)setPre_itn_token_to_post_itn_char_alignments:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
