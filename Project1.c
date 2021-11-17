#include<stdio.h>


void main()
{
    int a,b,pos;
    printf("enter choice. 1 for mirror and 2 for lens. : ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("enter choice. 1 for concave and 2 for convex. : ");
        scanf("%d",&b);
        if(b==1)
        {
            printf("enter pos of object\n\n 1: at infinity\t2:beyond centre of curvature c\t3:at the centre of curvature c\t4:between c and f\t5:at focus f : ");
            scanf("%d",&pos);
            if(pos==1)
            {
                printf("position: at focus f \n\n\nsize of image: highly diminished \n\n\nnature of image: real and inverted\n");
            }
            if(pos==2)
            {
                printf("position: between f and c \n\n\nsize of image: diminished \n\n\nnature of image: real and inverted\n");
            }
            if(pos==3)
            {
                printf("position: at c \n\n\nsize of image: same size \n\n\nnature of image: real and inverted\n");
            }
            if(pos==4)
            {                                  
                printf("position: beyond c \n\n\nsize of image: enlarged \n\n\nnature of image: real and inverted\n");
            }
            if(pos==5)
            {
                printf("position: at infinity \n\n\nsize of image: highly enlarged \n\n\nnature of image: real and inverted\n");
            }
        }

        else if(pos==2)
        {
            printf("enter pos of object\n\n 1: between infinity and pole\t2:at infinity : ");
            scanf("%d",&pos);
            if(pos==1)
            {
                printf("position: between pole and focus,behind the mirror \n\n\nsize of image: diminished \n\n\nnature of image: virtual and erect\n");
            }
            if(pos==2)
            {
                printf("position: at focus f,behind the mirror \n\n\nsize of image: highly diminished,point sized \n\n\nnature of image: virtual and erect\n");
            }
            

        }
    }

    else if(a==2)
    {
        printf("enter choice. 1 for convex and 2 for concave. : ");
        scanf("%d",&b);
        if(b==1)
        {
            printf("enter pos of object\n\n 1: at infinity\t2:beyond centre of curvature c\t3:at the centre of curvature c\t4:between c and focal point f\t5:at focal point\t6:between focal point and pole p : ");
            scanf("%d",&pos);
            if(pos==1)
            {
                printf("position: at focal point \n\n\nsize of image: highly diminished \n\n\nnature of image: real and inverted\n");
            }
            if(pos==2)
            {
                printf("position: between focal point and centre of curvature \n\n\nsize of image: point size diminished \n\n\nnature of image: real and inverted\n");
            }
            if(pos==3)
            {
                printf("position: at centre of curvature \n\n\nsize of image: same size \n\n\nnature of image: real and inverted\n");
            }
            if(pos==4)
            {                                  
                printf("position: beyond centre of curvature \n\n\nsize of image: magnified \n\n\nnature of image: real and inverted\n");
            }
            if(pos==5)
            {
                printf("position: at infinity \n\n\nsize of image: highly magnified \n\n\nnature of image: real and inverted\n");
            }
            if(pos==6)
            {
                printf("position: on same side of lens \n\n\nsize of image: magnified \n\n\nnature of image: virtual and erect\n");
            }
        }

        else if(b==2)
        {
            printf("enter pos of object\n\n 1: between lens and infinity\t2:at infinity : ");
            scanf("%d",&pos);
            if(pos==1)
            {
                printf("position: at centre of curvature  \n\n\nsize of image: diminished \n\n\nnature of image: virtual and erect\n");
            }
            if(pos==2)
            {
                printf("position: between focal point and optical centre  \n\n\nsize of image: highly diminished \n\n\nnature of image: virtual and erect\n");
            }
            
            

        }
    }
}
