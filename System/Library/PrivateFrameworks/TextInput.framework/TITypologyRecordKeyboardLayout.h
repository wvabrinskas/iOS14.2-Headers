/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardLayout, NSString;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord {

	TIKeyboardLayout* _keyboardLayout;
	NSString* _name;

}

@property (nonatomic,retain) TIKeyboardLayout * keyboardLayout;              //@synthesize keyboardLayout=_keyboardLayout - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(TIKeyboardLayout *)keyboardLayout;
-(void)setKeyboardLayout:(TIKeyboardLayout *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)setName:(NSString *)arg1 ;
@end

