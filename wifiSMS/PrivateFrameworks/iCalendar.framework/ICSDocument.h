/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSCalendar;



@interface ICSDocument : NSObject 
{
    ICSCalendar *_calendar;
}


- (id)initWithICSString:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 encoding:(NSUInteger)arg2 options:(NSUInteger)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithCalendar:(id)arg1;
- (void)dealloc;
- (id)calendar;
- (id)ICSDataWithOptions:(NSUInteger)arg1;
- (id)ICSStringWithOptions:(NSUInteger)arg1;
- (BOOL)validate:(id*)arg1;

@end
